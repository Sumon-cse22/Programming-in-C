#include<stdio.h>
#include<math.h>
int main()
{
    int n,flag=0;

    printf("Enter Your Number:");
    scanf("%d",&n);

    if(n==0 || n==1)
        flag=1;

    for(int i=2; i<=n/2; i++)
    {
        if(n%2==0)
            flag=1;
        break;
    }
    if(flag==0)
        printf("%d is a Prime Number.",n);
    else
        printf("%d is Not a Prime Number.",n);

    return 0;
}
