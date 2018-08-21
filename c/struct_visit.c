#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

/* 函数申明 */
void printBook(struct Books book);
void printBook2(struct Books *book);

int main() {
    struct Books Book1; /* 声明 Book1，类型为 Books */
    struct Books Book2; /* 声明 Book2，类型为 Books */

    /* Book1 详述 */
    strcpy(Book1.title, "C Programming");
    strcpy(Book1.author, "Nuha Tom");
    strcpy( Book1.subject, "C Programming Tutorial");
    Book1.book_id = 434343;

    /* Book2 详述 */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
    /* 输出 Book1 信息 */
   printf("Book1 title %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf("Book1 book_id: %d\n", Book1.book_id);
  
   /* 输出 Book2 信息 */
   printBook( Book2 );
   
   /* 结构体指针作为参数 */
   printBook2(&Book1);
   return 0;
};

/* 结构体作为函数的参数 */
void printBook(struct Books book) {
    printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
};

/* 结构体指针作为函数的参数 */
void printBook2(struct Books *book) {
    printf( "Book title : %s\n", book -> title);
   printf( "Book author : %s\n", book -> author);
   printf( "Book subject : %s\n", book -> subject);
   printf( "Book book_id : %d\n", book -> book_id);
};
