#include <stdio.h>

void nine(void) {
    // 外层循环控制行
    int i = 0;
    // 内层循环控制列
    int j = 0;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%dx%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
}