// 利用递归的方法，递归分为回推和递推两个阶段。要想知道第五个人岁数，需知道第四人的岁数，依次类推，推到第一人（10岁），再往回推。
#include <stdio.h>

int age(int n)
{
    int c;
    if (n = 1)
        c = 10;
    else
        c = age(n - 1) + 2;
    return c;
}

int main(int argc, char const *argv[], char const **env)
{
    printf("%d\n", age(5));
}
