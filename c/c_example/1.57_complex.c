#include <stdio.h>
// 使用结构体（struct）将两个复数相加。

typedef struct complex
{
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);

int main(int argc, char const *argv[])
{
    complex n1, n2, temp;
    printf("The first complex: \n");
    printf("Input the real and imag: \n");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("The second complex: \n");
    printf("Input the second real and imag: \n");
    scanf("%f %f", &n2.real, &n2.imag);

    temp = add(n1, n2);
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);

    return 0;
}

complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;

    return temp;
}