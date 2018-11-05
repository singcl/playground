#include <stdio.h>

int main()
{
    int year;
    printf("输入年份: ");
    scanf("%d", &year);
    // year = 400;

    // （四年一闰，百年不闰) || 四百年在闰年
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("y\n");
    }
    else
    {
        printf("n\n");
    }

    return 0;
}