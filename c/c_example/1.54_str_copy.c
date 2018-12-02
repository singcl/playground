#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char src[40];
    char dest[100];

    // 将s所指向的某一块内存中的每个字节的内容全部设置为ch指定的ASCII值,块的大小由第三个参数指定
    // 这个函数通常为新申请的内存做初始化工作
    //用 法 : void *memset(void *s, char ch, unsigned n);
    memset(dest, '\0', sizeof(dest));

    strcpy(src, "My name is Singcl");
    strcpy(dest, src);

    printf("The result: %s \n", dest);
    printf("sizeof(dest): %d \n", sizeof(dest));
    printf("The strlen(dest): %d \n", strlen(dest));
    return 0;
}
