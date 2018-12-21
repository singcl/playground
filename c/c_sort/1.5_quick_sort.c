
/*****************************************************
File name：quick_sort
Author：singcl
Version: 0.1
Date: 2018/12/21
Description: 对数组进行快速排序
*****************************************************/
#include <stdio.h>

#define LENGTH(array) (sizeof(array)) / (sizeof(*array))

/**************************************************
 *函数名：show_info
 *作用：打印数组元素
 *参数：
 *
 * array: 打印的数组
 * len - 数组元素个数
 **************************************************/
void show_info(int array[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%-3d", array[i]);
    }
    printf("\n");
    return;
}

/********************************
 *函数名：swap
 *作用：交换两个数的值
 *参数：int x, int y
 ********************************/
void swap(int *x, int *y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    return;
}

/************************************
 *函数名：quick_sort
 *作用：快速排序算法
 *参数：
 * array: 待排序数组  begin: 开始位置 end: 结束位置
 ************************************/
void quick_sort(int array[], int begin, int end)
{
    int i, j;
    if (begin < end)
    {
        i = begin + 1; // arr[begin]作为基准数，因此从array[begin+1]开始与基准数比较！
        j = end;       // array[end]是数组的最后一位

        while (i < j)
        {
            if (array[i] > array[begin]) // 如果比较的数组元素大于基准数，则交换位置。
            {
                swap(&array[i], &array[j]); // 交换两个数
                j--;
            }
            else
            {
                i++; // 将数组向后移一位，继续与基准数比较
            }
        }

        /* 跳出while循环后，i = j。
         * 此时数组被分割成两个部分  -->  array[begin+1] ~ array[i-1] < array[begin]
         *                           -->  array[i+1] ~ array[end] > array[begin]
         * 这个时候将数组array分成两个部分，再将array[i]与array[begin]进行比较，决定array[i]的位置。
         * 最后将array[i]与array[begin]交换，进行两个分割部分的排序！以此类推，直到最后i = j不满足条件就退出！
         */
        if (array[i] >= array[begin]) // 这里必须要取等“>=”，否则数组元素由相同的值时，会出现错误！
        {
            i--;
        }

        swap(&array[begin], &array[i]); // 交换array[i]与array[begin]

        quick_sort(array, begin, i);
        quick_sort(array, j, end);
    }
}

// main
int main()
{
    int n;
    int array[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = LENGTH(array);

    printf("Before sort: \n");
    show_info(array, len);

    quick_sort(array, 0, len - 1);

    printf("After sort: \n");
    show_info(array, len);

    return 0;
}
