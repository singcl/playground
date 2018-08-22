#include <stdio.h>

// 数组名是一个指向数组中第一个元素的常量指针
int main() {
    double balance[5] = {1000.0, 2.0, 3.4,17.0, 50.00};
    double *p;
    int i;

    p = balance;
    /* 输出数组中每个元素的值 */
    for (i = 0; i < 5; i++) {
        printf("*(p + %d): %f\n", i, *(p + i));
    }

    printf( "使用 balance 作为地址的数组值\n");

    for ( i = 0; i < 5; i++) {
        printf("*(balance + %d): %f\n", i , *(balance + i));
    }

    return 0;
}
