# Loops and Comprehensions
# 类似Python中的列表推导式

# Eat lunch.
eat = (food) -> "#{food} eaten"
x = (food for food in ['toast', 'cheese', 'wine']) # 类似Python的元组
xx = (eat food for food in ['toast', 'cheese', 'wine'])
console.log xx

# 返回多个值的列表推导式.
courses = ['greens', 'caviar', 'truffles', 'roast', 'cake']
menu = (i, dish) -> "Menu Item #{i}: #{dish}"
xxx = (menu i + 1, dish for dish, i in courses)
console.log xxx

# 带条件的列表推导式
foods = ['broccoli', 'spinach', 'chocolate']
xxxx = (eat food for food in foods when food isnt 'chocolate')
console.log xxxx

#
countdown = (num for num in [10..1])
console.log countdown

#
console.log (x for x in [0..10] by 2)

#
console.log ('不使用value' for [0..10])

# Comprehensions也可以迭代对象  但是（coffee 使用 of）
Object.defineProperty(Object.prototype, 'aa', {
    value: '原型链上的可枚举属性',
    enumerable: true
})

Object.defineProperty(Object.prototype, 'bb', {
    value: '原型链上的不可枚举属性',
    enumerable: false
})

# JS的for in 循环概念：以 任意顺序 遍历一个 对象及其原型链 上所有 可枚举属性。
# 关键词：任意顺序 - 对象及其原型链 - 可枚举属性

yearOld = { max: 10, ida: 9, time: 11 }
ages = for child, age of yearOld
    "#{child} is #{age}"

# ages = ("#{child} is #{age}" for child, age of yearOld) 貌似这样写也可以？
console.log ages


if this.studyingEconomics
    buy() while supply > demand
    sell() until supply > demand

num = 6
lyrics = while num -= 1
    "#{num} little monkeys, jumping on the bed.
    One fell out and bumped his head."

console.log lyrics
