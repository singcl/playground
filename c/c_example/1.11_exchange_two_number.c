#include <stdio.h>

int main()
{
    double firstNumber, secondNumber, temporaryNumber;
    printf("Please input the first Number:");
    scanf("%lf", &firstNumber);

    printf("Please input the second Number:");
    scanf("%lf", &secondNumber);

    // 使用临时变量交换两个数的值
    temporaryNumber = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temporaryNumber;

    printf("After exchange: firstNumber = %.2lf\n", firstNumber);
    printf("After exchange: secondNumber = %.2lf\n", secondNumber);

    // 不使用临时变量交换两个整数的值：
    int a, b;
    a = 11;
    b = 99;

    printf("Before exchange - \n a = %d, b = %d \n\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After exchange - \n a = %d, b = %d \n", a, b);
    return 0;
}