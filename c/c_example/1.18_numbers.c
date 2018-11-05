#include <stdio.h>

int main()
{
    double num;
    printf("请输入一个数字:");
    scanf("%lf", &num);
    if (num <= 0.0)
    {
        if (num == 0.0)
            printf("你输入的是 0。");
        else
            printf("你输入的是负数。");
    }
    else
    {
        printf("你输入的是正数。");
    }
    return 0;
}