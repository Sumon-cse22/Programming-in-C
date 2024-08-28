#include<stdio.h>
int main()
{
    int n, sum=0;

    printf("Enter Your Limits:");
    scanf("%d",&n);
    printf("Your Natural Number Series is:\n");

    for(int i=1; i<=n; i++)
    {
        printf("%d\n",i);
        sum+=i;
    }

    printf("Summation Of Your Natural Number is:%d\n",sum);
    return 0;
}
