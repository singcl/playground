// 简单的结构体应用实例。
#include <stdio.h>

struct programming
{
    float constant;
    char *pointer;
};

int main(int argc, char **argv, char **envp)
{
    struct programming variable;
    char string[] = "https://imcoco.top";

    variable.constant = 1.23;
    variable.pointer = string;

    printf("%f\n", variable.constant);
    printf("%s\n", variable.pointer);

    return 0;
}
