#include <cstdio>
#include <iostream>

int main()
{
    int a = 10;
    printf("%d\n", a);
    printf("%p\n", &a);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int *b = &a;
    printf("%p\n", b);
    printf("%p\n", &b);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int &c = a;
    printf("%d\n", c);
    printf("%p\n", &c);

    return 0;
}