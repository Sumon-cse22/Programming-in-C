#include<stdio.h>
int main()
{
    int num;

    printf("Enter Your Number:");
    scanf("%d",&num);
    printf("Your Naturul Number Series is:");
        for(int i=1; i<=num; i++)
        {
            if(i==5)
            {
                   continue;
            }
         printf("%d ",i);
    }
    return 0;
}
