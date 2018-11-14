#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("请输入一个正数：");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        // 符合该条件不是素数
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}