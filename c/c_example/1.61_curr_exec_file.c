#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char c;
    fp = fopen(__FILE__, "r");
    do
    {
        c = getc(fp);
        putchar(c);
    } while (c != EOF);
    fclose(fp);
    return 0;
}
