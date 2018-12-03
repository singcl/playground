#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
} s;

int main(int argc, char const *argv[])
{
    printf("Input information: \n");

    printf("Your name:");
    scanf("%s", s.name);

    printf("Number:");
    scanf("%d", &s.roll);

    printf("Marks:");

    // 浮点数使用%f
    scanf("%f", &s.marks);

    printf("Output information: \n ");
    printf("name: ");
    puts(s.name);

    printf("Number: %d\n", s.roll);
    printf("Marks: %.1f \n", s.marks);

    return 0;
}
