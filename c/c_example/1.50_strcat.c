#include <stdio.h>

int main(int argc, const char *argv[])
{
    char s1[100], s2[100], i, j;
    printf("Input the first String:");
    scanf("%s", s1);

    printf("Input the second String:");
    scanf("%s", s2);

    // 计算字符串s1的长度
    for (i = 0; s1[i] != '\0'; i++)
        ;

    for (j = 0; s2[j] != '\0'; j++, i++)
    {
        s1[i] = s2[j];
    }

    s1[i] = '\0';
    printf("The result: %s", s1);
    return 0;
}
