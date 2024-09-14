#include<stdio.h>
#include<math.h>

void checkprimenumber()
{
    int n,i,flag=0;

    printf("Enter Your Number: ");
    scanf("%d",&n);

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
    checkprimenumber();


    return 0;
}
