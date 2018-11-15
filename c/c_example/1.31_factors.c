#include <stdio.h>

int main()
{
    int number, i;
    printf("Please input a integer:");
    scanf("%d", &number);

    printf("%d has factors: ", number);
    // number 先二分 因为 number / 2 后面的数必须要乘 一个小于2 的数才可能等于number 所有除了它本身 其他数不肯能整除
    // 二分number 减少循环次数 优化
    for (i = 1; i <= number / 2; ++i)
    {
        if (number % i == 0)
        {
            printf("(%d %d) ", i, number / i);
        }
    }
    return 0;
}