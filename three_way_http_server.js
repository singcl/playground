var http = require('http');

/* // 写法一 （最常用的写法）
var server = http.createServer((req, res) => {
    res.end('nodejs');
}); */

/* // 写法二
var server = new http.Server();
server.on('request', (req, res) => {
    res.end('nodejs');
}); */

// 写法三
var server = new http.Server((req, res) => {
    res.end('nodejs');
});

server.listen(4545, () => {
    //
    console.log('Nodejs server at port 4545');
});
