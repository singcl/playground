// Rxjs doesn't export default, so import Rx from .. will be undefined.
// Rxjs V5 和 V6 使用方法有较大区别

import { Observable } from 'rxjs';

const observable = Observable.create((subscriber) => {
  subscriber.next(1);
  subscriber.next(2);
  subscriber.next(3);
  setTimeout(() => {
    subscriber.next(4);
    subscriber.complete();
  }, 1000);
});

console.log('just before subscribe');
observable.subscribe({
  next(x) {
    console.log(`got value ${x}`);
  },
  error(err) {
    console.error(`something wrong occurred: ${err}`);
  },
  complete() {
    console.log('done');
  },
});
console.log('just after subscribe');
