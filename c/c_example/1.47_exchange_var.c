#include <stdio.h>

void cyclicSwap(int *, int *, int *);

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Please Input value of a , b, c: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("before Exchange:\n");
    printf("a = %d, b = %d , c = %d\n", a, b, c);

    cyclicSwap(&a, &b, &c);

    printf("after Exchange:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}

void cyclicSwap(int *a, int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}