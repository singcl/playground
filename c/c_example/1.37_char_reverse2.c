#include <stdio.h>
#include <string.h>

int main()
{
    char c[40];
    int i = 1;
    printf("请输入字符串：");
    scanf("%s", c);

    int j = strlen(c);
    do
    {
        printf("%c", c[j - i]);
        ++i;
    } while (i <= j);
    return 0;
}