#include <stdio.h>
#include "header.h"

int x;
char *test()
{
    return "hello";
}

int main(void)
{
    puts(test());
}
