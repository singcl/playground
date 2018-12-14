#include <stdio.h>

// 交换两个数
void swap(int *restrict a, int *restrict b);

// 选择排序
void selection_sort(int arr[], int len);
void selection_sort2(int arr[], int len);

int main(int argc, char const *argv[])
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr) / sizeof(*arr);

    selection_sort(arr, len);
    selection_sort2(arr, len);

    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// 选择排序
void selection_sort(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                // temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;

                // 使用自定义的swap函数利用指针交换元素
                swap(arr + i, arr + j);
            }
        }
    }
}

// 选择排序2
void selection_sort2(int arr[], int len)
{
    int i, j;

    for (i = 0; i < len - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < len; j++)
        { //走訪未排序的元素
            if (arr[j] < arr[min])
            {                             //找到目前最小值
                min = j;                  //紀錄最小值
                swap(&arr[min], &arr[i]); //做交換
            }
        }
    }
}

// 交换两个数
void swap(int *restrict a, int *restrict b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}