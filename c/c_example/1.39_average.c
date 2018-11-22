#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sum, loop;
    float avg;

    for (loop = 0; loop < 10; loop++)
    {
        // 访问数组元素的两种写法
        // sum += array[loop];
        sum += *(array + loop);
    }

    avg = (float)sum / loop;
    printf("平均值为： %.2f", avg);
    return 0;
}
