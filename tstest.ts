// https://www.zhihu.com/question/50780469 第一个回答里的第一条评论
// 2.x 不需要ref 直接import就可以;
/// <reference path="index.d.ts" />

import Xxs = require("xxs");
import SearchFunc = Xxs.SearchFunc;

let cac: SearchFunc = (a: string, b: string): boolean => !!(a + b);
let cacb: SearchFunc = (a, b) => !!(a + b);  // 这叫做“按上下文归类”，是类型推论的一种。 它帮助我们更好地为程序指定类型。
let cacc: SearchFunc = function (a: string, b: string): boolean { return !!(a + b); };
let cacx: (source: string, subString: string) => boolean = (a: string, b: string): boolean => !!(a + b);

const a: Array<number|string> = [22, "333"];
const b: (number|string)[] = [222, "3333"];
type ActionCreator = (...args: any[]) => Action | AsyncAction


interface Counter {
    (start: number): string;
    interval: number;
    reset(): void;
}

function getCounter(): Counter {
    let counter = <Counter>function (start: number) { };
    counter.interval = 123;
    counter.reset = function () { };
    return counter;
}

// class Point {
//     public x: number;
//     public y: number;
// }

// const point3d: Point = { x: 1, y: 2 };

// interface IClockInterface {
//     currentTime: Date;
//     setTime(d: Date);
// }

// class Clock implements IClockInterface {
//     public currentTime: Date;
//     constructor(h: number, m: number) { }
//     public setTime(d: Date) {
//         this.currentTime = d;
//     }
// }

//
interface IClockConstructor {
    // 具有构造器签名的函数类型的接口
    new (hour: number, minute: number): IClockInterface;
}
interface IClockInterface {
    tick();
}

function createClock(ctor: IClockConstructor, hour: number, minute: number): IClockInterface {
    return new ctor(hour, minute);
}

class DigitalClock implements IClockInterface {
    public tick() {
        console.log("beep beep");
    }
}

class AnalogClock implements IClockInterface {
    constructor(h: number, m: number) { }
    public tick() {
        console.log("tick tock");
    }
}

const kkk = new AnalogClock(1, 2);

const digital = createClock(DigitalClock, 12, 17);
const analog = createClock(AnalogClock, 7, 32);

type aaaa = new (ss: number) => void;

interface IC<T> {
    new (a: number, b: string): T;
}

interface ICcI {
    tick(): void;
}

class C implements ICcI {
    public tick() {
        console.log(333);
    }
}

function create<T>(c: IC<T> ): T {
    return new c(2, "sss");
}

create<C>(C);

interface IRoute {
    new (method: string, path: string): ICcI;
}

interface IGood {
    say(path: string): any;
}
interface IGoodConstructor {
    readonly prototype: IGood;
    new (path: string): IGood;
}
