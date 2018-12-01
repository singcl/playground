#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[1000], ch;
    int i, frequency;

    printf("Input string:");
    fgets(str, sizeof(str) / sizeof(str[0]), stdin);

    printf("Input the search char: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i])
        {
            frequency++;
        }
    }

    printf("char %c appear %d counts in string %s", ch, frequency, str);

    return 0;
}
