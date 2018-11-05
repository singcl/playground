#include <stdio.h>

int main()
{
    int year;
    printf("输入年份：");
    scanf("%d", &year);

    // （四年一闰，百年不闰) || 四百年在闰年
    // 先处理百年，余下的在处理非百年
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("y\n");
        }
        else
        {
            printf("n\n");
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("y\n");
        }
        else
        {
            printf("n\n");
        }
    }
    return 0;
}