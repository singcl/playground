#include <stdio.h>
#include <math.h>

// һ�ζ��η������
int main(void) {
    double a, b, c;
    double delat;
    double x1, x2;
    char ch;

    // intellij idea:
    // ���ϲ���һ�У�ctrl + alt + enter
    // ���²���һ�У�ctrl + shift + enter
    // ���²���һ�У����ƶ���꣩: ctrl + enter
    // ���¸���һ�У� ctrl + D
    do {
        printf("������һԪ���η��̵�����ϵ��: \n");

        printf("������ϵ��a: \n");
        scanf("%lf", &a);

        printf("������ϵ��b: \n");
        scanf("%lf", &b);

        printf("������ϵ��c: \n");
        scanf("%lf", &c);

        delat = b * b - 4 * a * c;

        if (delat > 0) {
            x1 = (sqrt(delat) - b) / 2;
            x2 = (sqrt(delat) + b) / 2;
            printf("Result: ����������ȵ�ʵ����x1 = %lf, x2 = %lf \n", x1, x2);
        } else if (delat == 0) {
            x1=(sqrt(delat) - b ) / 2;
            printf("Result: ��2�����ʵ���⣺x1=x2 = %lf \n", x1);
        } else {
            printf("Result: ��ʵ����\n");
        }

        printf("�Ƿ������Y/N\n");
        scanf(" %c",&ch);
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
