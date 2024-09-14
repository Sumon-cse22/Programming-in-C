#include<stdio.h>
#include<math.h>

int getinteger()
{
    int n;

    printf("Enter Your Number: ");
    scanf("%d",&n);

    return n;


}
int main()
{
    int n,i,flag=0;
    n=getinteger();

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


    return 0;
}
