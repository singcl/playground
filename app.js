var express = require('express')
var fs = require('fs')
var app = express()

app.get('/d', function(req, res, next) {
    var len = 0
    fs.createReadStream('./test2.txt')
        .on('data', function(chunk) {
            console.log(`Received ${chunk.length} bytes of data.`);
            len += chunk.length
            console.log('total', parseInt(len/(1024 * 1024)), 'MB')
        })
        .on('end', function() {
            console.log('end')
        })
        .pipe(res)
        res.on('finish', function() {
            console.log('finish')
        })
})

app.listen(3000, function() {
    console.log('start!')
})