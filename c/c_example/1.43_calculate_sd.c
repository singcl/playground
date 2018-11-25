#include <stdio.h>
#include <math.h>

float calculateSD(float data[]);

// 计算标准偏差
int main(int argc, char const *argv[])
{
    int i;
    float data[10];

    printf("Please input 10 numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &data[i]);
    }

    printf("\n SD = %.6f", calculateSD(data));
    return 0;
}

float calculateSD(float data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;
    for (i = 0; i < 10; i++)
    {
        sum += data[i];
    }

    mean = sum / 10;
    for (i = 0; i < 10; i++)
    {
        standardDeviation += pow(data[i] - mean, 2);
    }
    return sqrt(standardDeviation / 10);
}
