// 一个较为复杂的泛型约束示例
// 使用原型属性推断并约束构造函数与类实例的关系
class BeeKeeper {
    hasMask: boolean;
}

class ZooKeeper {
    nametag: string;
}

class Animal {
    numLegs: number;
}

class Bee extends Animal {
    keeper: BeeKeeper;
}

class Lion extends Animal {
    keeper: ZooKeeper;
}

function createInstance<A extends Animal>(c: new () => A): A {
    return new c();
}

createInstance(Lion).keeper.nametag; // typechecks!
createInstance(Bee).keeper.hasMask; // typechecks!

// 带构造器签名的函数类型接口
interface Ix {
    new (x: string): number;
}

// 带构造器签名的函数类型别名 和  带构造器签名的函数类型接口一样的效果
type xxox = new (x: string) => void;

// 在TypeScript使用泛型创建工厂函数时，需要引用构造函数的类类型
function create<T>(c: { new (): T }): T {
    return new c();
}

// 或者这样写
function create2<T>(c: new () => T): T {
    return new c();
}

// 在泛型约束中使用类型参数;
function getProperty(obj: T, key: K) {
    return obj[key];
}

let x = { a: 1, b: 2, c: 3, d: 4 };

getProperty(x, 'a'); // okay
getProperty(x, 'm'); // error: Argument of type 'm' isn't assignable to 'a' | 'b' | 'c' | 'd'.
