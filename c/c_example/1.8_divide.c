#include <stdio.h>

int main(int argc, char *argv[], char **env) {
    int dividend, divisor, quotient, remainder;

    printf("Please input the dividend number:");
    scanf("%d", &dividend);

    printf("Please input the divisor Number:");
    scanf("%d", &divisor);

    // ������
    quotient = dividend / divisor;

    // ��������
    remainder = dividend % divisor;

    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", remainder);
}
