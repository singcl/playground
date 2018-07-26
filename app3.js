// 通过该条语句 我们可以直接在js文件中 require coffee 模块使用
require('coffeescript/register')

var x = require('./test.coffee')

console.log(x(4))
