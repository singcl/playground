// 在Windows平台使用Git执行bash脚本生成SSL证书时，以下命令会产生错误Subject does not start with '/'
// openssl req -x509 -newkey rsa:2048 -nodes -sha256 -subj '/CN=localhost' -keyout 密钥.pem -out 证书.pem

// 该错误是由Git for Windows中MinGW/MSYS模块的路径转换机制引起的。
// 解决方案：将-subj参数中第一个“/”改为“//”，其余“/”改为“\”，如下：

// openssl req -x509 -newkey rsa:2048 -nodes -sha256 -subj '//CN=localhost' -keyout 密钥.pem -out 证书.pem

const http2 = require("http2");
const fs = require("fs");

const server = http2.createSecureServer({
    key: fs.readFileSync("密钥.pem"),
    cert: fs.readFileSync("证书.pem")
});
server.on("error", err => console.error(err));

server.on("stream", (stream, headers) => {
    // 流是一个双工流。
    stream.respond({
        "content-type": "text/html",
        ":status": 200
    });
    stream.end("<h1>你好世界</h1>");
});

server.listen(8443);
