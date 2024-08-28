#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter Your Limit:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("Your Natural Number Sumation is: %d", sum);
    return 0;
}
