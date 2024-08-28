#include<stdio.h>
int main()
{
    int id;
    float marks;
    double averageMarks;
    char name;

    printf("Enter Your Roll:");
    scanf("%d",&id);

    printf("Enter Your Marks:");
    scanf("%f",&marks);

    printf("Enter Your Average Marks:");
    scanf("%lf",&averageMarks);

    printf("Enter 1st Letter of Your Name:");
    scanf(" %c",&name);

    printf("Roll:%d\n", id);
    printf("Marks:%f\n", marks);
    printf("Average Marks:%lf\n", averageMarks);
    printf("Name:%c\n", name);

    return 0;
}
