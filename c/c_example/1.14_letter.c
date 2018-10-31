#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char cLetter;
    int iInRange, iCheck, i, iLetter;
    i = 1;
    while (i)
    {
        printf("输入一个字母, 判断元音与辅音. 如果想退出,请输入“0”。\n");
        scanf("%c", &cLetter);
        getchar();
        printf("----------------------------------------------------------------------\n");
        iLetter = (int)cLetter;
        iCheck = isalpha(iLetter);

        if (iCheck)
        {
            iInRange = (cLetter == 'a') || (cLetter == 'e') || (cLetter == 'i') || (cLetter == 'o') || (cLetter == 'u') || (cLetter == 'A') || (cLetter == 'E') || (cLetter == 'I') || (cLetter == 'O') || (cLetter == 'U');
            if (iInRange)
            {
                printf("字母 %c 是元音字母!\n", cLetter);
                printf("----------------------------------------------------------------------\n");
                continue;
            }
            else
            {
                printf("字母 %c 是辅音字母!\n", cLetter);
                printf("----------------------------------------------------------------------\n");
                continue;
            }
        }
        else if (iCheck == 0)
        {
            if (iLetter != 48)
            {
                printf("Error input!\n");
                printf("----------------------------------------------------------------------\n");
                continue;
            }
            else if ((int)cLetter == 48)
            {
                printf("Bye bye~~~!\n");
                printf("----------------------------------------------------------------------\n");
                i = (int)cLetter - 48;
            }
        }
    }

    return 0;
}