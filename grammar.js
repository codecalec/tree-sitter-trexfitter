const newline = /\r?\n/;

module.exports = grammar({
  name: 'TRexFitter',

  extras: $ => [$.comment, /[ \t]/],
  
  rules: {
    source_file: $ => repeat($.block),

    comment: $ => token(prec(-1,
      seq(/[%#]/, /.*/)
    )),

    block: $ => seq(
      $.block_type,
      ":",
      $.identifier,
      newline,
      repeat(choice($.setting, newline))
    ),

    setting_list: $ => repeat1(choice(seq($.setting, newline), newline)),

    setting: $ => seq(
      $.setting_name,
      /:\s*/,
      $.setting_value
    ),

    block_type: $ => choice(
      "Job",
      "Fit",
      "Limit",
      "Significance",
      "Options",
      "Region",
      "Sample",
      "NormFactor",
      "ShapeFactor",
      "Systematic",
      "Morphing",

      "Multifit",
    ),

    setting_name: $ => choice(
      /[A-z]+/,
    ),

    setting_value: $ => choice(
      $._quoted_value,
      $._value,
    ),

    _quoted_value: $ => seq(
      /"/,
      $._value,
      /"/,
    ),

    _value: $ => choice(
      /.+/,
      $._bool,
    ),

    _bool: $ => choice(
      /true/i,
      /false/i,
    ),

    identifier: $ => /[A-z"0-9]+/,
  }
})
