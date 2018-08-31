#include <stdio.h>
#include <math.h>

// #define PI 3.14159265
const double PI = 3.14159265;

// 声明一个函数指针
double (*psin)(double);

int main()
{
    double x, ret, val;

    x = 45.0;
    val = PI / 180;
    // 这里用指针调用函数
    // 和直接调用函数一样的效果
    psin = &sin;
    ret = psin(x * val);
    printf("%lf 的正弦是 %lf 度", x, ret);

    return (0);
}