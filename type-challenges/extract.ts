/*
  43 - Extract
  -------
  by Zheeeng (@zheeeng) #easy #built-in

  ### Question

  Implement the built-in Extract<T, U>
  > Extract from T those types that are assignable to U

  > View on GitHub: https://tsch.js.org/43
*/

/* _____________ Your Code Here _____________ */

type MyExtract<T, U> = T extends U ? T : never;

/* _____________ Test Cases _____________ */
import { Equal, Expect } from "@type-challenges/utils";

type cases = [
    Expect<
        Equal<MyExtract<"a" | "b" | "c", "a">, Extract<"a" | "b" | "c", "a">>
    >,
    Expect<
        Equal<
            MyExtract<"a" | "b" | "c", "a" | "b">,
            Extract<"a" | "b" | "c", "a" | "b">
        >
    >,
    Expect<
        Equal<
            MyExtract<string | number | (() => void), Function>,
            Extract<string | number | (() => void), Function>
        >
    >
];

/* _____________ Further Steps _____________ */
/*
  > Share your solutions: https://tsch.js.org/43/answer
  > View solutions: https://tsch.js.org/43/solutions
  > More Challenges: https://tsch.js.org
*/
