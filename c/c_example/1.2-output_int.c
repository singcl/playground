#include <stdio.h>

int main(int argc, char **argv, char **env) {
    int number;
    printf("输出一个整数：");

    // scanf() 格式化输入
    // scanf @see: http://c.biancheng.net/view/160.html
    scanf("%d", &number);

    // printf() 显示格式化输入
    printf("你输入的整数是: %d", number);

    return 0;
}
