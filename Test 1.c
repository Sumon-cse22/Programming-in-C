#include<stdio.h>
int main()
{
    int Roll;
    float Registration;
    double Marks;
    char Name;

    printf("Enter Your Roll:");
    scanf("%d",&Roll);
     printf("Enter Your Registration No:");
    scanf("%f",&Registration);
     printf("Enter Your Marks:");
    scanf("%lf",&Marks);
     printf("Enter Your Name:");
    scanf(" %c",&Name);


    printf("Your Roll No is: %d\n",Roll);
     printf("Your Registrantion No is: %f\n",Registration);
      printf("Your Marks is: %lf\n",Marks);
       printf("Your 1st letter of name is: %c\n",Name);

    return 0;
}
