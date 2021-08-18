// ANSI C 定义了许多宏。在编程中您可以使用这些宏，但是不能直接修改这些预定义的宏。
#include <stdio.h>

//main函数的三个参数：
//第一个参数  argc ，用于存放命令行参数的个数。
//第二个参数  argv，是个字符指针的数组，每个元素都是一个字符指针，指向一个字符串，即命令行中的每一个参数。
//第三个参数  envp ,也是一个字符指针的数组，这个数组的每一个元素是指向一个环境变量的字符指针。
int main(int argc, char **argv, char **envp)
{
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);
    return 0;
}
