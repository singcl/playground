/*
  8 - Readonly 2
  -------
  by Anthony Fu (@antfu) #medium #readonly #object-keys

  ### Question

  Implement a generic `ReadonlyPartial<T, K>` which takes two type argument `T` and `K`.

  `K` specify the set of properties of `T` that should set to Readonly. When `K` is not provided, it should make all properties readonly just like the normal `Readonly<T>`.

  For example

  ```ts
  interface Todo {
    title: string
    description: string
    completed: boolean
  }

  const todo: ReadonlyPartial<Todo, 'title' | 'description'> = {
    title: "Hey",
    description: "foobar",
    completed: false,
  }

  todo.title = "Hello" // Error: cannot reassign a readonly property
  todo.description = "barFoo" // Error: cannot reassign a readonly property
  todo.completed = true // OK
  ```

  > View on GitHub: https://tsch.js.org/8
*/

/* _____________ Your Code Here _____________ */

type ReadonlyPartial<T, K extends keyof T = keyof T> = T & {
    readonly [P in K]: T[P];
};

/* _____________ Test Cases _____________ */
import { Alike, Expect } from "@type-challenges/utils";

type cases = [
    Expect<Alike<ReadonlyPartial<Todo1>, Readonly<Todo1>>>,
    Expect<Alike<ReadonlyPartial<Todo1, "title" | "description">, Expected>>,
    Expect<Alike<ReadonlyPartial<Todo2, "title" | "description">, Expected>>
];

interface Todo1 {
    title: string;
    description?: string;
    completed: boolean;
}

interface Todo2 {
    readonly title: string;
    description?: string;
    completed: boolean;
}

interface Expected {
    readonly title: string;
    readonly description?: string;
    completed: boolean;
}

/* _____________ Further Steps _____________ */
/*
  > Share your solutions: https://tsch.js.org/8/answer
  > View solutions: https://tsch.js.org/8/solutions
  > More Challenges: https://tsch.js.org
*/
