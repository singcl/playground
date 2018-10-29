#include <stdio.h>

int main(int argc, char *argv[], char *env[]) {
    double fNumber, sNumber, product;

    printf("请输入两个浮点数：");

    // 用户输入两个浮点数
    scanf("%lf %lf", &fNumber, &sNumber);

    // 两数相乘
    product = fNumber * sNumber;

    // 输出结果， %.2lf 保留两个小数点
    printf("结果 = %.2lf", product);

    return 0;
}
