#include <stdio.h>

int main(int argc, char const *argv[])
{
    char operator;
    double firstNumber, lastNumber;

    printf("输入操作符：（+， -， *， /）:");
    scanf("%c", &operator);

    printf("请输入两个数字：");
    scanf("%lf %lf", &firstNumber, &lastNumber);

    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", firstNumber, lastNumber, firstNumber + lastNumber);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", firstNumber, lastNumber, firstNumber - lastNumber);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf", firstNumber, lastNumber, firstNumber * lastNumber);
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf", firstNumber, lastNumber, firstNumber / lastNumber);
        break;
    // operator doesn't match any case constant (+, -, *, /)
    default:
        printf("Error! operator is not correct");
    }
    return 0;
}
