
// express middleware wrapper
// express中间件wrapper函数 自动处理中间件异常
let wrapper = (fn) => (...args) => fn(...args).catch(args[2])
