#include <stdio.h>
#include <math.h>

// 一次二次方程求解
int main(void) {
    double a, b, c;
    double delat;
    double x1, x2;
    char ch;

    // intellij idea:
    // 向上插入一行：ctrl + alt + enter
    // 向下插入一行：ctrl + shift + enter
    // 向下插入一行（不移动光标）: ctrl + enter
    // 向下复制一行： ctrl + D
    do {
        printf("请输入一元二次方程的三个系数: \n");

        printf("请输入系数a: \n");
        scanf("%lf", &a);

        printf("请输入系数b: \n");
        scanf("%lf", &b);

        printf("请输入系数c: \n");
        scanf("%lf", &c);

        delat = b * b - 4 * a * c;

        if (delat > 0) {
            x1 = (sqrt(delat) - b) / 2;
            x2 = (sqrt(delat) + b) / 2;
            printf("Result: 有两个不相等的实根：x1 = %lf, x2 = %lf \n", x1, x2);
        } else if (delat == 0) {
            x1=(sqrt(delat) - b ) / 2;
            printf("Result: 有2个相等实数解：x1=x2 = %lf \n", x1);
        } else {
            printf("Result: 无实数解\n");
        }

        printf("是否继续吗：Y/N\n");
        scanf(" %c",&ch);
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
