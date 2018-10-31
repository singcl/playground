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

        // 所以这里会一个一个读取字符串中的字符
        scanf("%c", &cLetter);

        // C 库函数 int getc(FILE * stream) 从指定的流 stream 获取下一个字符（一个无符号字符），并把位置标识符往前移动。
        // C 库函数 int getchar(void) 从标准输入 stdin 获取一个字符（一个无符号字符）。这等同于 getc 带有 stdin 作为参数。
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