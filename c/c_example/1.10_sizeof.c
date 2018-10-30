#include <stdio.h>

// 使用 sizeof 操作符计算int, float, double 和 char四种变量字节大小。
// windows、linux、32、64 部分基本类型字节大小会有差异

int main()
{
    int integerType;
    short shortType;
    long longType;
    long long longlongType;
    float floatType;
    double doubleType;
    long double longDoubleType;
    char charType;

    // sizeof 操作符用于计算变量的字节大小
    // %f 表示float %lf表示 double
    // %d = int, %ld = long, %lld = long long;
    // 在32位编译器上，int = long = 32bit；long long = 64bit。
    printf("Size of int: %ld bytes \n", sizeof(integerType));
    printf("Size of short: %ld bytes \n", sizeof(shortType));
    printf("Size of long: %ld bytes \n", sizeof(longType));
    printf("Size of long long: %ld bytes \n", sizeof(longlongType));
    printf("Size of float: %ld bytes \n", sizeof(floatType));
    printf("Size of double: %ld bytes \n", sizeof(doubleType));
    printf("Size of long double: %ld bytes \n", sizeof(longDoubleType));
    printf("Size of char: %ld bytes \n", sizeof(charType));

    // Size of int: 4 bytes
    // Size of short: 2 bytes
    // Size of long: 4 bytes
    // Size of long long: 8 bytes
    // Size of float: 4 bytes
    // Size of double: 8 bytes
    // Size of long double: 16 bytes
    // Size of char: 1 bytes
}