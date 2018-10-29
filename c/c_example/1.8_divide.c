#include <stdio.h>

int main(int argc, char *argv[], char **env) {
    int dividend, divisor, quotient, remainder;

    printf("Please input the dividend number:");
    scanf("%d", &dividend);

    printf("Please input the divisor Number:");
    scanf("%d", &divisor);

    // 计算商
    quotient = dividend / divisor;

    // 计算余数
    remainder = dividend % divisor;

    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", remainder);
}
