#include <stdio.h>
#include <stdint.h>

// 题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
// 程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列。

int main(int argc, char const *argv[])
{
    uint32_t i;
    uint32_t j;
    uint32_t k;

    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if (j == i)
            {
                continue;
            }

            for (k = 1; k < 5; k++)
            {
                if (k == j || k == i)
                {
                    continue;
                }

                printf("%u,%u,%u\n", i, j, k);
            }
        }
    }
    return 0;
}
