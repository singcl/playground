#include <stdio.h>

int count;
extern void write_extern(void);
extern int max(int, int);
extern int arr(void);
extern int enums(void);
extern int func_pointer(void);

int main()
{
    count = 5;
    write_extern();
    printf("the max number is %d", max(12, 4));
    arr();
    enums();
    func_pointer();
}