#include <stdio.h>

int main(int argc, char const *argv[])
{
    int data[5], i;
    printf("Please input element:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", data + i);
    }

    printf("Your input is:");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(data + i));
    }
    return 0;
}
