#include <stdio.h>

int main()
{
    int number, originalNumber, remainder, result = 0;
    printf("输入三位数：");
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    if (result == number)
    {
        printf("%d is Armstrong number", number);
    }
    else
    {
        printf("%d is`t Armstrong number", number);
    }
    return 0;
}