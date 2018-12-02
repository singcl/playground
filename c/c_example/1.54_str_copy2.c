#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s1[100], s2[100], i;

    printf("string s1:");
    scanf("%s", s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';

    printf("string s2 is: %s", s2);
    return 0;
}
