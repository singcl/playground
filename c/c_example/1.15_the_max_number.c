#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Please input three nunber use whitespace separated: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    if (max > c) {
        printf("the max number is %d", max);
    } else {
        max = c;
        printf("the max number is %d", max);
    }
    return 0;
}
