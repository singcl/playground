console.log 2**4 # 幂运算
console.log 10/3 # 传统除法
console.log -10.00//3  # floor除法 结果始终向下取整

# CoffeeScript’s existential operator ? returns true unless a variable is null or undefined or undeclared, 
# which makes it analogous to Ruby’s nil?.
solipsism = true if mind? and not word?

speed = 0
speed ?= 13
footprints = yeti ? 'bear'

# ? 操作符
zip = lottery.drawWinner?().address?.zipcode