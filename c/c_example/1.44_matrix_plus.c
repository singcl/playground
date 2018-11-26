#include <stdio.h>

int main(int argc, char const *argv[])
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    printf("Please input row (1 - 100):");
    scanf("%d", &r);
    printf("Please input column (1 - 100):");
    scanf("%d", &c);

    printf("\n Input first D: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Input element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Input second D:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Input element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // 相加
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // 显示结果
    printf("\nsum result: \n\n");

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {

            printf("%d   ", sum[i][j]);

            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;
}
