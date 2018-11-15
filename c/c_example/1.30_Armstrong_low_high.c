#include <stdio.h>
#include <math.h>

int main()
{
    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;

    printf("Please input two integer:");
    scanf("%d %d", &low, &high);
    printf("%d 和 %d 之间的 armstrong 数是有：", low, high);

    // low 和 high 之间的数
    for (i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;

        // 判断输入的是几位数
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }

        // 计算
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

        if (result == i)
        {
            printf("%d ", i);
        }

        n = 0;
        result = 0;
    }
    return 0;
}