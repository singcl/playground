# Functions
# run this file use: coffee function.coffee

square = (x) -> x * x
cube = (x) -> square(x) * x

console.log cube(3)

# default values for arguments
fill = (container, liquid = "coffee") ->
    "Filling the #{container} with #{liquid}..."

console.log fill "cap", "water"

# 匿名函数
-> 2
(a, b) -> a + b

# CoffeeScript在编译后的函数体会给你最后的代码加上一个return
# 如果你不想要这个return值得话，可以显式的return一个值：

#编译前
xy = (x, y) ->
  x * y
  return "显示teturn"

console.log xy(2, 3)
# // 编译后
# var xy;
# xy = function(x, y) {
#   x * y;
#   return 0;
# }
