#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("请输入一个自然数：");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
