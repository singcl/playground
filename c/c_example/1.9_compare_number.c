#include <stdio.h>

int main()
{
    int a, b;

    a = 11;
    b = 99;

    // 也可以通过以下代码实现让用户在终端输入两个数
    // printf("输入第一个值:");
    // scanf("%d", &a);
    // printf("输入第二个值:");
    // scanf("%d", &b);

    if (a > b)
    {
        printf("a is greater then b");
    }
    else
    {
        printf("a 小于等于 b");
    }

    // 比较三个数
    int aa = 11, bb = 22, cc = 33;

    if (aa > bb && aa > cc)
    {
        printf("%d 最大", aa);
    }
    else if (bb > aa && bb > cc)
    {
        printf("%d 最大", bb);
    }
    else if (cc > aa && cc > bb)
    {
        printf("%d 最大", cc);
    }
    else
    {
        printf("有两个或三个数值相等");
    }

    return 0;
}