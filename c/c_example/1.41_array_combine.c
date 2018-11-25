#include <stdio.h>

// 当将数组作为实参传递到另一个函数中时, 另一个函数的形参相当于一个指针变量, 因为将数组的名作为实参时,
// 就是将数字的首地址作为实参, 所以在test函数中输出的sizeof(arr)
// 其实得到的是一个整型数组的长度(所占的字节数), 所以结果是8, 再用其除以int所占的字节数(4), 结果就是2

// 这样是得不到准确的数组的长度的, 建议的操作是在定义数组的函数中计算数组的长度,
// 在以实参的形式传递出去, 这样其他的函数变可以获得数组的长度

void bubble_sort(int arr[], int len);

int main(int argc, char const *argv[])
{
    int array[10];
    int even[5] = {0, 2, 4, 6, 8};
    int odd[5] = {1, 3, 5, 7, 9};

    int loop, index, e_len, o_len;
    e_len = o_len = 5;

    index = 0;
    for (loop = 0; loop < e_len; loop++)
    {
        array[index] = even[loop];
        index++;
    }

    for (loop = 0; loop < o_len; loop++)
    {
        array[index] = odd[loop];
        index++;
    }

    printf("\n even number: ->");
    for (loop = 0; loop < e_len; loop++)
    {
        printf("%d", even[loop]);
    }

    printf("\n odd number: ->");
    for (loop = 0; loop < o_len; loop++)
    {
        printf("%d", odd[loop]);
    }

    int len = (int)sizeof(array) / sizeof(*array);
    bubble_sort(array, len);

    printf("\n array number: ->");
    for (loop = 0; loop < index; loop++)
    {
        printf("%d", array[loop]);
    }
    return 0;
}

// 冒泡排序
void bubble_sort(int arr[], int len)
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