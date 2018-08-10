# coffee对数组和对象的结构赋值和ECMA 的结构赋值一样
class Persion
  constructor: (options) ->
    { @name, @age, @height = 'average' } = options

tim = new Persion { name: 'Tim', age: 13 }
console.log tim

# coffee的箭头函数和ES的箭头函数一样
Account = (customer, cart) ->
  @customer = customer
  @cart = cart

  $('.shopping_cart').on 'click', (e) =>
    @customer.purchase @cart
