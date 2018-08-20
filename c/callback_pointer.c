#include <stdio.h>
#include <stdlib.h>

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
    {
        array[i] = getNextValue();
    }
}

int getNextRandomValue(void)
{
    return rand();
}

int main(void)
{
    int mayarray[10];
    // int *p = NULL;
    // p = mayarray;

    populate_array(mayarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", mayarray[i]);
    }

    printf("\n");
    return 0;
}