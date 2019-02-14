#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(437);
    char a = 219;
    printf("\1\1\n");

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}
