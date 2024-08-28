#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1=0,n2=1,next=n1+n2;

    printf("Enter The nth term:");
    scanf("%d",&n);

    printf("Fibonacci series: %d %d ",n1,n2);
    //next=n1+n2;


 for(next=0;next<=n;)
    {
        printf("%d ",next);

        n1=n2;
        n2=next;
        next=n1+n2;
    }
    return 0;
}
