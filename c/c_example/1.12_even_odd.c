#include <stdio.h>

int main()
{
    int number;
    printf("Please input a Integer:");
    scanf("%ld", &number);

    if (number % 2 == 0)
    {
        printf("%d is even number", number); // 偶数
    }
    else
    {
        printf("%d is odd number", number); // 奇数
    }
    // 整数，在计算机中存储的都是二进制，奇数的最后一位必是1
    // // 判断这个数最后一位是1这为奇数
    // if (number & 1)
    //     printf("%d 是奇数。", number);
    // else
    //     printf("%d 是偶数。", number);

    return 0;
}