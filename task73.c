//structure to store student information and print it using array of structures
#include <stdio.h>

struct student
{
    int roll;
    float marks;
};

int main()
{
    struct student s[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Enter roll and marks: ");
        scanf("%d%f",&s[i].roll,&s[i].marks);
    }

    printf("\nStudent Records:\n");

    for(i=0;i<3;i++)
    {
        printf("%d %.2f\n",s[i].roll,s[i].marks);
    }

    return 0;
}