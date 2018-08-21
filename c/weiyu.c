#include <stdio.h>

struct bs
{
    int a : 8;
    int b : 2;
    int c : 6;
} data;

// 说明 data 为 bs 变量，共占两个字节
// 其中位域 a 占 8 位，位域 b 占 2 位，位域 c 占 6 位。

struct packed_struct
{
    unsigned int f1 : 1;
    unsigned int f2 : 1;
    unsigned int f3 : 1;
    unsigned int f4 : 1;
    unsigned int type : 4;
    unsigned int my_int : 9;
} pack;

struct bs2
{
    unsigned a : 4;
    unsigned : 4;   /* 空域 */
    unsigned b : 4; /* 从下一单元开始存放 */
    unsigned c : 4;
};

// 从以上分析可以看出，位域在本质上就是一种结构类型，不过其成员是按二进位分配的。
// 位域的使用和结构成员的使用相同：
// 位域变量名.位域名   位域变量名->位域名

void main(void)
{
    struct bss
    {
        unsigned a : 1;
        unsigned b : 3;
        unsigned c : 4;
    } bit, *pbit;

    bit.a = 1;                                   /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b = 7;                                   /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.c = 15;                                  /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    printf("%d, %d, %d\n", bit.a, bit.b, bit.c); /* 以整型量格式输出三个域的内容 */

    pbit = &bit;  /* 把位域变量 bit 的地址送给指针变量 pbit */
    pbit->a = 0;  /* 用指针方式给位域 a 重新赋值，赋为 0 */
    pbit->b &= 3; /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
    pbit->c |= 1; /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
    printf("%d, %d, %d\n", pbit->a, pbit->b, pbit->c);
}