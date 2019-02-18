// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
// 方法二：

#include <stdio.h>

int main(int argc, char const *argv[], char const **env)
{
    int m, n, maxx, minx, z;
    printf("please input two number:");
    scanf("%d %d", &m, &n);
    z = m > n ? n : m;

    for (int x = 1; x <= z; x++)
    {
        if (m % x == 0 && n % x == 0)
        {
            maxx = x;
        }
    }

    minx = m * n / maxx;
    printf("max common divisor: %d\n", maxx);
    printf("max common times: %d\n", minx);
    return 0;
}
