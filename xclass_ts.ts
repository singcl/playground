// @singcl/r-ts 是我用TS写的一个简单库 包含库文件和.d.ts文件
// 该库默认导出一个Class
// 测试@singcl/r-ts 库是否正确
// 在TYPESCRIPT中使用

import XClass = require('@singcl/r-ts');

const xclassInstance = new XClass('singcl');
const res = xclassInstance.myMethod({
  height: 20,
  width: 100,
});

console.log('the result is ', res);
// ts-node xclass_ts.ts
