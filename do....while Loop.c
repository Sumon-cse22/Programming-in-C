#include<stdio.h>
int main()
{
    int n,sum=0;
    do
    {
        printf("Enter Your Positive Number:");
        scanf("%d",&n);
        sum+=n;
    }

    while(n!=0);
    printf("Summation: %d",sum);

    return 0;
}
