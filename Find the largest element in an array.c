#include<stdio.h>
//#include<math.h>
#define N 3
int main()
{
    int a[N],i,max;

    printf("Enter Your Elements:",N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1; i<N; i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("Largest Element Of This Array:%d\n",max);

    return 0;
}
