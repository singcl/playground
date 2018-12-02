#include <stdio.h>

int main(int argc, char const *argv[])
{
    char line[150];
    int i, vowels, consonants, digits, spaces;

    vowels = consonants = digits = spaces = 0;

    printf("Input a String:");
    scanf("%[^\n]", line);

    for (i = 0; line[i] != '\0'; i++)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
        {
            ++vowels;
        }
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            consonants++;
        }
        else if (line[i] >= '0' && line[i] <= '9')
        {
            digits++;
        }
        else if (line[i] == ' ')
        {
            ++spaces;
        }
    }

    printf("vowels: %d", vowels);
    printf("\n consonants: %d", consonants);
    printf("\n digits: %d", digits);
    printf("\n spaces: %d", spaces);

    return 0;
}
