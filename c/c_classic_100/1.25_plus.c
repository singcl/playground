// 题目：求1+2!+3!+...+20!的和。
// 程序分析：此程序只是把累加变成了累乘。
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    double sum, mix;
    sum = 0, mix = 1;
    for (i = 1; i <= 20; i++) {
        mix = mix * i;
        sum = sum + mix;
    }
    printf("%lf\n", sum);
    return 0;
}
