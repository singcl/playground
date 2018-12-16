// exec: node --experimental-modules --loader ./custom-loader.mjs ./custom-loader-file.js
// 或者 exec: sh x.sh

// 自定义loader node执行 后缀为.js的es6模块语法的文件
// node 默认.mjs后缀的文件为es6模块语法的文件

import process from 'process';

console.log(process.env);
