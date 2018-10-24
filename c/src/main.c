#include "../include/b.h"
#include <stdio.h>
#include <stdlib.h>

//main函数的三个参数：
//第一个参数  argc ，用于存放命令行参数的个数。
//第二个参数  argv，是个字符指针的数组，每个元素都是一个字符指针，指向一个字符串，即命令行中的每一个参数。
//第三个参数  envp ,也是一个字符指针的数组，这个数组的每一个元素是指向一个环境变量的字符指针。

int main(int argc, char **argv, char **envp) {
    double  a = 49.0;
    double  b;

    printf("input a:%f\n",a);
    b = cal_sqrt(a);
    printf("sqrt result:%f\n",b);

    int i = 0;
    while (envp[i] != NULL)//数组最后一个元素是NULL
    {
        printf("%s\n", envp[i]);
        i++;
    }
    system("pause");
    return 0;

}
