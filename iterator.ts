interface IIterable {
    [Symbol.iterator](): IIterator;
}

interface IIterator {
    next(value?: any): IIterationResult;
}

interface IIterationResult {
    value: any;
    done: boolean;
}

interface IIterableIIterator {
    value: any;
    done: boolean;
    [Symbol.iterator](): IIterator;
}

interface IIterableIIterator2 extends IIterable, IIterator {
    //
}
