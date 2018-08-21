#include <stdio.h>

int main()
{
    // FILE *fopen(const char *filename, const char *mode);
    FILE *fp = NULL;
    fp = fopen("./temp", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
    return 0;
}