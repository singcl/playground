#include <stdio.h>

int main()
{
    int array[6] = {32, 45, 556, 43, 12, 65};
    int loop, largest;

    largest = array[0];

    for (loop = 1; loop < 6; loop++)
    {
        if (largest < array[loop])
        {
            largest = array[loop];
        }
    }

    printf("the max number is %d", largest);
    return 0;
}