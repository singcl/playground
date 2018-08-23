var a1 = Buffer.from('A'); // 默认编码为utf8
console.log('A 分配内存大小（字节）为：%d\n', a1.length);
console.log(a1.toString());

var a2 = Buffer.from('A', 'ucs2'); // 默认编码为utf8
console.log('A 分配内存大小（字节）为：%d\n', a2.length);
console.log(a2.toString('ucs2'));

var b1 = Buffer.from('我', 'utf8');
console.log('我 分配内存大小（字节）为：%d\n', b1.length);
console.log(b1.toString());

var b2 = Buffer.from('我', 'ucs2');
console.log('我 分配内存大小（字节）为：%d\n', b2.length);
console.log(b2.toString('ucs2'));
