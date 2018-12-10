#include <stdio.h>
#include <stdlib.h>/* exit() 函数 */
// 将字符串写入文件。

int main(int argc, char const *argv[])
{
    char sentence[1000];
    FILE *fptr;

    fptr = fopen("singcl.txt", "w");
    if (fptr == NULL)
    {
        printf("Error");
        exit(1);
    }

    printf("Inputs strings:");
    fgets(sentence, (sizeof(sentence) / sizeof(sentence[0])), stdin);

    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    return 0;
}
