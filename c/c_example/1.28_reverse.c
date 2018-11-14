#include <stdio.h>

int main()
{
    int n, reverseInteger = 0, remainder, originalInteger;
    printf("Please input a Integer:");
    scanf("%d", &n);
    originalInteger = n;

    while (n != 0)
    {
        remainder = n % 10;
        reverseInteger = reverseInteger * 10 + remainder;
        n /= 10;
    }

    if (originalInteger == reverseInteger)
    {
        printf("%d 是回文数", originalInteger);
    }
    else
    {
        printf("%d不是回文数", originalInteger);
    }
    return 0;
}