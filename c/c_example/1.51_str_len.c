#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[1000];
    int len;

    printf("Input String:");
    scanf("%s", s);

    len = strlen(s);
    printf("String`s length is: %d", len);
    return 0;
}
