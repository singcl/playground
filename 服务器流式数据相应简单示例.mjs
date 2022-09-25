// 服务器流式数据相应简单示例
import http from 'node:http';
http.createServer((req, res) => {
    res.writeHead(200, {
        'Content-Type': 'text/html',
        'Transfer-Encoding': 'chunked'
    });
    setInterval(() => {
        res.write('chunked\r\n')
    }, 1000)
}).listen(9000)
