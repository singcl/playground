// 题目：两个乒乓球队进行比赛，各出三人。甲队为a, b, c三人，乙队为x, y, z三人。
// 已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x, z比，请编程序找出三队赛手的名单。

// a,b,c 三个人看成3个盒子 x,y,z 看成3个球
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char i, j, k;
    for (i = 'x'; i <= 'z'; i++)
    {
        for (j = 'x'; j <= 'z'; j++)
        {
            if (i != j)
            {
                for (k = 'x'; k <= 'z'; k++)
                {
                    if (i != k && j != k)
                    {
                        if (i != 'x' && k != 'x' && k != 'z')
                        {
                            printf("顺序为： a--%c\tb--%c\tc--%c\n", i, j, k);
                        }
                    }
                }
            }
        }
    }
}