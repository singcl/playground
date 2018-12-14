#include <stdio.h>

// 向后冒泡排序
void bubble_sort_backward(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 向前冒泡排序
void bubble_sort_forward(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr) / sizeof(*arr);
    bubble_sort_backward(arr, len);

    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    int arr2[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len2 = (int)sizeof(arr2) / sizeof(*arr2);
    bubble_sort_forward(arr2, len2);

    for (i = 0; i < len2; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
