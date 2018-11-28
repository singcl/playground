#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, i, gcd, temp;

    printf("输入两个正整数，用空格隔开：");
    scanf("%d %d", &n1, &n2);

    temp = (n1 > n2) ? n2 : n1;
    for (i = temp; i >= 1; i--)
    {
        // 判断是否是最大公约数
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    printf("%d 和 %d 最大公约数是 %d", n1, n2, gcd);
    return 0;
}
