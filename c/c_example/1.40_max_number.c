#include <stdio.h>

int main()
{
    int array[6] = {32, 45, 556, 43, 12, 65};
    int loop, largest, smallest;

    largest = array[0];
    smallest = array[0];

    for (loop = 1; loop < 6; loop++)
    {
        if (largest < array[loop])
        {
            largest = array[loop];
        }

        if (smallest > array[loop])
        {
            smallest = array[loop];
        }
    }

    printf("the max number is %d \n", largest);
    printf("the min number is %d \n", smallest);
    return 0;
}