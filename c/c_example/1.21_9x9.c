#include <stdio.h>

int main() {
    //���ѭ������,������
    int i = 0;
    //�ڲ�ѭ������,������
    int j = 0;

    for (i = 1; i <= 9; i++ ) {
        for (j = 1; j <= i; j++) {
            printf("%d x %d = %d\t", j, i, j * i);
        }
        printf("\n");
    }
}
