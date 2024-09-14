#include<stdio.h>
#include<math.h>

int checkprimenumber(int n)
{
    int i;

    if(n==0 || n==1)
        return 0;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num,flag;

    printf("Enter Your Number: ");
    scanf("%d",&num);

    flag=checkprimenumber(num);

    if(flag==1)
        printf("%d is a prime Number.\n",num);
    else
        printf("%d is not a prime number.\n",num);

    return 0;
}
