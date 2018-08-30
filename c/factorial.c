#include <stdio.h>

// 在C语言中定义函数后，在使用前，需要在main函数前进行声明，否则会报错。
// 或者将函数定义在main函数的前面，则不需要声明
// 在其他函数中调用自定义的函数时，也是要在调用者前进行声明，或者定义在调用者前，否则会报错无法使用

double factorial(unsigned int);
int fibonacci(int);

double factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}

int fibonacci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibonacci(i - 1) + fibonacci(i - 2);
}

// main函数的三个参数：
// 第一个参数 argc ，用于存放命令行参数的个数。
// 第二个参数 argv，是个字符指针的数组，每个元素都是一个字符指针，指向一个字符串，即命令行中的每一个参数。
// 第三个参数 envp, 也是一个字符指针的数组，这个数组的每一个元素是指向一个环境变量的字符指针。

int main(int argc, char const *argv[])
{
    int i = 15;
    printf("%d 的阶乘为 %f\n", i, factorial(i));
    for (int k = 0; k < 15; k++)
    {
        printf("%d\t\n", fibonacci(k));
    }
    /* code */
    return 0;
}
