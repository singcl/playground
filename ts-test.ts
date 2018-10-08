export namespace a {
  //
}

const g: Good;

const x: [string, boolean] = ['ee', true];
const xx: string[] = ['hddd'];

interface User {
  name: string;
  age: number;
}

const user = {
  age: 123,
  name: 'Jack',
};

// 在类当中实现方法的重载
class SomeClass {
  /**
   * 注释 1
   */
  public test(para: User): number;

  /**
   * 注释 2
   */
  public test(para: number, flag: boolean): number;

  public test(para: User | number, flag?: boolean): number {
    // 具体实现
    return 11;
  }
}

const someClass = new SomeClass();

// ok
someClass.test(user);
someClass.test(123, false);

// Error
someClass.test(123);
someClass.test(user, false);
