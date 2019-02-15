// 题目：判断101到200之间的素数。

// 程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。

#include <stdio.h>
#include <math.h>

int IsPrime(int n);

int main(void)
{
    int i, j = 0;
    for (i = 101; i <= 200; i++)
    {
        if (IsPrime(i))
        {
            printf("%d ", i);
            j++;
            if (j % 5 == 0)
            {
                printf("\n");
            }
        }
    }
}

int IsPrime(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
