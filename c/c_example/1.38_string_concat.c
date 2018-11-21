#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join(char *, char *);

int main(int argc, char const *argv[])
{
    char *a = "abc";
    char *b = "def";

    char *c = join(a, b);
    printf("Concatenated String is %s\n", c);

    free(c);
    c = NULL;
    return 0;
}

/*方法一，不改变字符串a,b, 通过malloc，生成第三个字符串c, 返回局部指针变量*/
char *join(char *a, char *b)
{
    char *c = (char *)malloc(strlen(a) + strlen(b) + 1); //局部变量，用malloc申请内存
    if (c == NULL)
    {
        exit(1);
    }

    char *tempc = c; //把首地址存下来
    while (*a != '\0')
    {
        *c++ = *a++;
    }

    while ((*c++ = *b++) != '\0')
    {
        ;
    }
    //注意，此时指针c已经指向拼接之后的字符串的结尾'\0' !
    return tempc; //返回值是局部malloc申请的指针变量，需在函数调用结束后free之
}