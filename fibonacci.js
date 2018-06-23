function* fibonacci() {
    let [pre, curr] = [0, 1]
    for(;;) {
        // "never" 禁止在语句末尾使用分号 (除了消除以 [、(、/、+ 或 - 开始的语句的歧义)
        yield pre; // 这里分号是必须的，或者写在下一行开始。分号自动插入规则(ASI)参考: http://eslint.cn/docs/rules/semi
        [pre, curr] = [curr, pre + curr]
    }
}

const gen = fibonacci()
for (let n of gen) {
    if (n > 1000) break
    console.log(n)
}
