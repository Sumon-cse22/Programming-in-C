#include<stdio.h>
#include<math.h>
int main()
{
    int n,L;

    printf("Enter Your Number:");
    scanf("%d",&n);

    printf("Enter Your Limit:");
    scanf("%d",&L);

    for(int i=1; i<=L; i++)
    {
        printf("%d*%d =%d\n",n,i,n*i);
    }

    return 0;
}
