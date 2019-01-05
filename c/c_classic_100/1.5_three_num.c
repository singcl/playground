
#include <stdio.h>
// 题目：输入三个整数x,y,z，请把这三个数由小到大输出。
// 程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
// 这里简单做，不用排序算法

#define swap(a, b) {a = a + b; b = a - b; a = a - b;}

int main()
{
    int x,y,z;
    printf("Please Input three number:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
    {
        swap(x,y);
    }
    if(x>z)
    {
        swap(x,z);
    }
    if(y>z)
    {
        swap(y,z);
    }
    printf("form min to Max: %d %d %d\n",x,y,z);
    return 0;
}
