#include<stdio.h>
int main()
{
    int num;

    printf("Enter Your Number:");
    scanf("%d",&num);

    if(num%2==0)
        printf("This is Even Number");
    else
        printf("This is Odd Number");
    return 0;
}
