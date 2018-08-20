#include <stdio.h>

int count;
extern void write_extern(void);
extern int max(int, int);

int main()
{
    count = 5;
    write_extern();
    printf("the max number is %d", max(12, 4));
}