#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char *env[]) {
    int n1, n2, gcd;
    int len = 1;
//    http://www.runoob.com/w3cnote/c-void-intro.html
// malloc����ֵ��void* ;(int *) ǿ������ת��Ϊ int *
    int *array = (int *)malloc(sizeof(int) * len);

    printf("�����������������Կո����:");
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <=n1 && i <=n2; ++i) {
        // �ж� i �Ƿ�Ϊ���Լ��
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            array[len - 1] = i;
            len = len + 1;
            array = (int *)realloc(array, sizeof(int) * len);
            printf("<<<%d>>>>", sizeof(array));
        }
    }

    printf("%d �� %d ���Լ���� %d \n", n1, n2, gcd);
    printf("array����%d: \n", sizeof(array));

    for (int i = 0; i <= (sizeof(array) / sizeof(int)); i++) {
        printf("%d �� %d ��Լ���� %d \n", n1, n2, array[i]);
    }
}
