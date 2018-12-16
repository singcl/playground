// node 10.3.0开始支持 instance class fields , but requires --harmony flags
// @see https://node.green/#ESNEXT-candidate--stage-3--instance-class-fields

// exec: node -r babel-register class-js.js
// exec: npx babel-node class-js.js  //npx使用本地package中的binary文件

// 定义个外部引用类型
const nodeRequest = {
    name: 'singcl',
    age: 34
};

// 定义一个父类
class Super {
    // instance class fields
    node;
    constructor(nr) {
        this.node = nr;
    }
}

// 定义一个子类继承父类
class Sub extends Super {
    constructor(...args) {
        super(...args);
        this.node.age = 12;
    }
}

// 使用引用类型创建父类实例
// 这时this.node 指向 nodeRequest
var r1 = new Super(nodeRequest);
console.log(r1); // Super { node: { name: 'singcl', age: 34 } }

// 使用引用类型创建子类
// Sub 继承 Super, 根据super关键字的含义：
// 先创建[不是拷贝]新的父类实例的属性和方法，在添加到this 上
// 这时 Sub 类的this.node 和 Super 类的 this.node 都是指向nodeRequest的指针，指针内存地址不一样
// 在Sub类中修改this.node 就是修改nodeRequest本身，
// 子类和父类的this.node都是指向nodeRequest的指向，所以nodeRequest修改后子类和父类都将受到影响
var r2 = new Sub(nodeRequest);
console.log(r2); // Sub { node: { name: 'singcl', age: 12 } }
console.log(r1); // Super { node: { name: 'singcl', age: 12 } }

console.log(nodeRequest); // { name: 'singcl', age: 12 }

console.log('============================');

// 定义一个父类
class Super2 {
    // instance class fields
    node;
    constructor() {
        this.node = {
            name: 'singcl2',
            age: 32
        };
    }
}

// 定义一个子类继承父类
// Sub2 继承 Super2, 根据super关键字的含义：
// 先创建[不是拷贝]新的 父类实例的属性和方法，在添加到this 上
// 这时 Sub2 类的this.node 和 Super2 类的 this.node 值都是{ name: 'singcl2', age: 32 },但是这两个值存储在不同的内存空间
// 在Sub2类中修改this.node 不会影响到Super2中的this.node
class Sub2 extends Super2 {
    node;
    constructor(...args) {
        super(...args);
        this.node.age = 22;
    }
}

var r1x = new Super2();
console.log(r1x); // Super2 { node: { name: 'singcl2', age: 32 } }
var r2x = new Sub2();
console.log(r2x); // Sub2 { node: { name: 'singcl2', age: 22 } }
console.log(r1x); // Super2 { node: { name: 'singcl2', age: 32 } }
var r1xx = new Super2();
console.log(r1xx); // Super2 { node: { name: 'singcl2', age: 32 } }

// 继承类也可以写成表达式的形式
const X = class extends Super {
    //
};

// 子类继承父类时：对于constructor中定义的实例属性和实例方法，子类继承父类时始终会创建新的，分配新的内存空间，而不是引用父类的。
