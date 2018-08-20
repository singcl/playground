/*
 struct tag {
    member_list
    member_list
    member_list
    ...
} variable_list;
 */

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book;

// 在一般情况下，tag、member - list、variable - list 这 3 部分至少要出现 2 个。

//此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
//同时又声明了结构体变量s1
//这个结构体并没有标明其标签
struct
{
    int a;
    char b;
    double c;
} s1;

//此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
//结构体的标签被命名为SIMPLE,没有声明变量
struct SIMPLE
{
    int a;
    char b;
    double c;
};

//用SIMPLE标签的结构体，另外声明了变量t1、t2、t3
struct SIMPLE t1,
    t2[20], *t3;

//也可以用typedef创建新类型
typedef struct
{
    int a;
    char b;
    double c;
} SIMPLE2;

//现在可以用Simple2作为类型声明新的结构体变量
SIMPLE2 u1, u2[20], *u3;

// 在上面的声明中，第一个和第二声明被编译器当作两个完全不同的类型，
// 即使他们的成员列表是一样的，如果令 t3 = &s1，则是非法的。