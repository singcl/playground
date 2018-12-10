#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char c[1000];
    FILE *restrict fptr;

    if ((fptr = fopen("singcl.txt", "r")) == NULL)
    {
        printf("Error,! opening file");
        exit(1);
    }

    fscanf(fptr, "%[^\n]", c);
    printf("The string: \n%s", c);
    fclose(fptr);

    return 0;
}
