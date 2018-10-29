#include <stdio.h>
#define MAX_STR_LEN 65535 // 定义最大字符串长度

int main(int argc, char **argv, char *env[]) {
    char s[MAX_STR_LEN];

    printf("请输入小于%d的任意字符：", MAX_STR_LEN);
    scanf("%s", s); // 读取字符串
    for (int i = 0; s[i]; i++) {
        printf("%c的ASCII：%d\t", s[i], s[i]);
    }
}
