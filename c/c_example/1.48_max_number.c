#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int i, num;
    float *data;

    printf("Input elements number (1 - 100):");
    scanf("%d", &num);

    // void *calloc(int num, int size);
    // 在内存中动态地分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0。
    // 所以它的结果是分配了 num*size 个字节长度的内存空间，并且每个字节的值都是0。

    // 为data 分配内存
    data = (float*) calloc(num, sizeof(float));

    if (data == NULL) {
        printf("Error!! 内存没有分配");
        exit(0);
    }

    printf("\n");
    //用户输入
    for (i = 0; i < num; i++) {
        printf("Input number %d: ", i + 1);
        scanf("%f", data + i);
    }

    // 循环找出最大数
    for (i = 1; i < num; i++) {
        if (*data < *(data + i)) {
            *data = *(data + i);
        }
    }

    printf("the max NUMBER is: %.2f", *data);
    return 0;
}