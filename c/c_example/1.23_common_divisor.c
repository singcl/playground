#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char *env[]) {
    int n1, n2, gcd;
    int len = 1;
//    http://www.runoob.com/w3cnote/c-void-intro.html
// malloc返回值是void* ;(int *) 强制类型转换为 int *
    int *array = (int *)malloc(sizeof(int) * len);

    printf("输入两个正整数，以空格隔开:");
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <=n1 && i <=n2; ++i) {
        // 判断 i 是否为最大公约数
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            array[len - 1] = i;
            len = len + 1;
            array = (int *)realloc(array, sizeof(int) * len);
            printf("<<<%d>>>>", sizeof(array));
        }
    }

    printf("%d 和 %d 最大公约数是 %d \n", n1, n2, gcd);
    printf("array长度%d: \n", sizeof(array));

    for (int i = 0; i <= (sizeof(array) / sizeof(int)); i++) {
        printf("%d 和 %d 公约数有 %d \n", n1, n2, array[i]);
    }
}
