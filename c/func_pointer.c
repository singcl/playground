#include <stdio.h>

// 两种方式来定义函数指针：https : www.cnblogs.com/loveyouyou616/p/5759046.html
// typedef int (*func_ptr)(int, int);

int maxx(int x, int y)
{
    return x > y ? x : y;
}

int func_pointer(void)
{
    /* p 是函数指针 */
    int (*p)(int, int) = &maxx; // &可以省略
    int a, b, c, d;
    printf("请输入三个数字:");
    scanf("%d %d %d", &a, &b, &c);
    /* 与直接调用函数等价，d = max(max(a, b), c) */
    d = p(p(a, b), c);
    printf("最大的数字是: %d\n", d);

    return 0;
}