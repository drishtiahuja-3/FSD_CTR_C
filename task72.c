//structure to store student information and print it
#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct student s1;

    s1.roll = 1;
    strcpy(s1.name, "Rahul");
    s1.marks = 85.5;

    printf("%d %s %f", s1.roll, s1.name, s1.marks);

    return 0;
}