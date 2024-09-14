#include<stdio.h>
#include<math.h>

void checkprimenumber(int n)
{
    int i,flag=0;
    if(n==1 || n==0)
        flag=1;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
            flag=1;
        break;
    }
    if(flag==1)
        printf("%d is not a prime number.\n",n);
        else
            printf("%d is a prime number.\n",n);
}
int main()
{
    int num;

    printf("Enter your number:");
    scanf("%d",&num);

    checkprimenumber(num);

    return 0;
}
