#include <stdio.h>

int main(int argc, char *argv[], char **env)
{
    int A = 65;
    int i;
    for (i = 1; i <= 26; ++i)
    {
        printf("%c ", A);
        A++;
    }
    return 0;
}