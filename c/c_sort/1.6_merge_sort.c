#include <stdio.h>
#include <stdlib.h>

#define LENGTH(array) (sizeof(array)) / (sizeof(*array))

void merge(int arr[], int low, int mid, int high)
{
    int i, k;
    int *tem = (int *)malloc((high - low + 1) * sizeof(int));

    //申请空间，使其大小为两个
    int left_low = low;
    int left_high = mid;
    int right_low = mid + 1;
    int right_high = high;

    for (k = 0; left_low <= left_high && right_low <= right_high; k++) // 比较两个指针所指向的元素
    {
        if (arr[left_low] <= arr[right_low])
        {
            tem[k] = arr[left_low++];
        }
        else
        {
            tem[k] = arr[right_low++];
        }
    }

    if (left_low <= left_high)
    {
        //若第一个序列有剩余，直接复制出来粘到合并序列尾
        //memcpy(tmp+k, arr+left_low, (left_high-left_low+l)*sizeof(int));
        for (i = left_low; i <= left_high; i++)
        {
            tem[k++] = arr[i];
        }
    }

    if (right_low <= right_high)
    {
        //若第二个序列有剩余，直接复制出来粘到合并序列尾
        //memcpy(tmp+k, arr+right_low, (right_high-right_low+1)*sizeof(int));
        for (i = right_low; i <= right_high; i++)
        {
            tem[k++] = arr[i];
        }
    }

    for (i = 0; i < high - low + 1; i++)
    {
        arr[low + i] = tem[i];
    }

    free(tem);
    return;
}

void merge_sort(int arr[], unsigned int first, unsigned int last)
{
    int mid = 0;
    if (first < last)
    {
        mid = (first + last) / 2; /* 注意防止溢出 */
        /*mid = first/2 + last/2;*/
        //mid = (first & last) + ((first ^ last) >> 1);
        merge_sort(arr, first, mid);
        merge_sort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }

    return;
}

int main()
{
    int i;
    int a[] = {32, 12, 56, 78, 76, 45, 36};

    printf("Before Merge Sort: \n");
    for (i = 0; i < LENGTH(a); i++)
    {

        printf("%d ", a[i]);
    }

    merge_sort(a, 0, LENGTH(a) - 1); // 排序

    printf("\nAfter Merge Sort: \n");
    for (i = 0; i < LENGTH(a); i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
