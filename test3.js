var fs = require('fs');
var path = require('path');

var thunkify = require('@singcl/thunk-run').thunkify;
var thunkifyRun = require('@singcl/thunk-run').thunkifyRun;

var reaFileThunkify = thunkify(fs.readFile);
var filePath = path.resolve(__dirname, './package.json');

// Generator Thunk自动执行器单独为一个thunkifyRun 模块

function* gen() {
    try {
        console.log('===========================')
        var r1 = yield reaFileThunkify(filePath, 'utf8');
        console.log(r1);
        var r2 = yield reaFileThunkify(filePath, 'utf8');
        console.log(r2);
    } catch (error) {
        console.log('Generator内捕获错误：', error);
    }
}


thunkifyRun(gen);
console.log('>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>')