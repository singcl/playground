# 带标签的模板字符串

upperCaseExpr = (textParts, expressions...) ->
  # reduce 后面有空格和没有空格是两个意思
  # 没有空格和后面的圆括号连在一起 同JS的函数调用
  # 有空格的话 后面整个函数为一个整体 作为reduce函数的参数
  textParts.reduce (text, textParts, i) ->
    text + expressions[i - 1].toUpperCase() + textParts

greet = (name, adjective) ->
  upperCaseExpr"""
    Hi #{name}.You look #{adjective}!
  """

console.log greet "singcl", "Good"