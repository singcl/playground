# 词法作用域和变量安全

outer = 1
changeNumbers = ->
  inner = -1
  outer = 10

inner = changeNumbers()
console.log inner