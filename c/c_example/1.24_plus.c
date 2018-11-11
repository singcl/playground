#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1;
    printf("输入一个整数：");
    scanf("%d", &n);

    // 如果输入的是负数
    if (n < 0)
    {
        printf("Eerror! 负数没有阶乘");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("%d ! = %llu", n, factorial);
    }
    return 0;
}