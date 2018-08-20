#include <stdio.h>

int count;
extern void write_extern(void);

int main()
{
    count = 5;
    write_extern();
}