#include<stdio.h>
#include<math.h>
#define N 5
int main()
{
    int a[N],i,Lowest;

    printf("Enter Your Elements:",N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    Lowest=a[0];
    for(i=1; i<N; i++)
    {
        if(Lowest>a[i])
            Lowest=a[i];
    }
    printf("Largest Element Of This Array:%d\n",Lowest);

    return 0;
}
