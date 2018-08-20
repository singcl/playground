#include <stdio.h>

int max(int num1, int num2)
{
    // 函数局部变量
    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}

/* 函数的传值调用和引用调用 */
