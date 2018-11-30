#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s[1000], i;

    printf("Input String:");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
        ;

    printf("The String`s length is: %d", i);
    return 0;
}
