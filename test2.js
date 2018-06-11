var fs = require('fs');
var path = require('path');
 
var co = require('@singcl/co');
// var run = co.run
var thunkify = co.thunkify;
var promisify = co.promisify;
 
var reaFileThunkify = thunkify(fs.readFile);
var reaFilePromisify = promisify(fs.readFile);
var filePath = path.resolve(__dirname, './test.txt');
 
co(function* () {
    var a = yield reaFileThunkify(filePath, 'utf8');
    var b = yield reaFileThunkify(filePath, 'utf8');
    var c = yield reaFileThunkify(filePath, 'utf8');
    console.log(a);
    console.log(b);
    console.log(c);
});
 
co(function* () {
    var a = reaFilePromisify(filePath, 'utf8');
    var b = reaFilePromisify(filePath, 'utf8');
    var c = reaFilePromisify(filePath, 'utf8');
    var res = yield [a, b, c];
    console.log(res);
});