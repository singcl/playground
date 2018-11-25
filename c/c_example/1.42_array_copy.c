#include <stdio.h>

int main(int argc, char const *argv[])
{
    int original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int copied[10];
    int loop;
    for (loop = 0; loop < 10; loop++)
    {
        copied[loop] = original[loop];
    }

    printf("the original arrray ->    the copied array: \n");
    for (loop = 0; loop < 10; loop++)
    {
        printf(" %2d          %2d\n", original[loop], copied[loop]);
    }
    return 0;
}
