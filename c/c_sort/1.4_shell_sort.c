#include <stdio.h>

// 数组长度
#define LENGTH(array) (sizeof(array)) / (sizeof(*array))

// 希尔排序，也称递减增量排序算法，是插入排序的一种更高效的改进版本。希尔排序是非稳定排序算法。
// 希尔排序是基于插入排序的以下两点性质而提出改进方法的：
// 1. 插入排序在对几乎已经排好序的数据操作时，效率高，即可以达到线性排序的效率
// 2. 但插入排序一般来说是低效的，因为插入排序每次只能将数据移动一位

void shell_sort(int arr[], int len);
void shell_sort2(int arr[], int len);
void group_sort(int arr[], int len, int i, int gap);

// main
int main(int argc, char const *argv[])
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = LENGTH(arr);

    shell_sort(arr, len);

    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    // shell_sort2
    int arr2[] = {80, 30, 60, 40, 20, 10, 50, 70};
    int len2 = LENGTH(arr2);

    shell_sort2(arr2, len2);

    for (i = 0; i < len2; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}

/*
 * 希尔排序
 *
 * 参数说明：
 * arr -- 待排序的数组
 * len -- 数组的长度
 *
 */
void shell_sort(int arr[], int len)
{
    int i, j, gap;

    // 正数的右移相当于除法，右移几位就除以2的几次方，如100>>4 等效 100/2^4
    // gap为步长，每次减为原来的一半。
    for (gap = len >> 1; gap > 0; gap >>= 1)
    {

        // 共gap个组，对每一组都执行直接插入排序
        for (i = 0; i < gap; i++)
        {

            // 直接插入排序
            for (j = i + gap; j < len; j += gap)
            {
                int temp = arr[j];
                int k = j - gap;

                while (k >= 0 && arr[k] > temp)
                {
                    arr[k + gap] = arr[k];
                    k -= gap;
                }
                arr[k + gap] = temp;
            }
        }
    }
}

/////////////////////////////////////////////////////////////

/*
 * 希尔排序
 *
 * 参数说明：
 * arr -- 待排序的数组
 * len -- 数组的长度
 */

void shell_sort2(int arr[], int len)
{
    int i, gap;
    // gap为步长，每次减为原来的一半。

    for (gap = len / 2; gap > 0; gap /= 2)
    {

        // 共gap个组，对每一组都执行直接插入排序
        for (i = 0; i < gap; i++)
        {
            group_sort(arr, len, i, gap);
        }
    }
}

/*
 * 对希尔排序中的单个分组进行排序
 *
 * 参数说明：
 *     arr  -- 待排序的数组
 *     i    -- 组的起始位置
 *     len  -- 数组总的长度
 *     gap  -- 组的步长
 *
 *  组是"从i开始，将相隔gap长度的数都取出"所组成的！
 */

void group_sort(int arr[], int len, int i, int gap)
{
    int j;

    for (j = i + gap; j < len; j += gap)
    {
        int temp = arr[j];
        int k = j - gap;
        while (k >= 0 && arr[k] > temp)
        {
            arr[k + gap] = arr[k];
            k -= gap;
        }

        arr[k + gap] = temp;
    }
}
