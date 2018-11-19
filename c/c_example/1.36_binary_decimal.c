#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long n);

int main(int argc, char const *argv[])
{
    long long n;
    printf("输入一个二进制：");
    scanf("%lld", &n);
    printf("二进制数%lld 转为十进制数%d", n, convertBinaryToDecimal(n));
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        i++;
    }
    return decimalNumber;
}