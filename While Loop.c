#include<stdio.h>
int main()
{
    int num,i=1;

    printf("Enter Your Number:");
    scanf("%d",&num);
    printf("Your Naturul Number Series is:");
    while(i<=num)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}
