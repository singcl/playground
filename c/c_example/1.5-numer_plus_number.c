#include <stdio.h>

int main(int argc, char **argv, char *env[]) { // 字符串数组的两种写法
    int fNumber, sNumber, sumNumber;
    printf("输入两个数（以空格分割）：");

    // 通过 scanf() 函数接收用户输入的两个整数
    scanf("%d %d", &fNumber, &sNumber);

    // 两个数字相加
    sumNumber = fNumber + sNumber;

    // 输出结果
    printf("the result: %d + %d = %d", fNumber, sNumber, sumNumber);
}
