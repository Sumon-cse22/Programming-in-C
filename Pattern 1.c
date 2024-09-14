#include<stdio.h>
#include<math.h>
int main()
{
    int n,row,col;

    printf("Enter Your Number:");
    scanf("%d",&n);

    for(row=1; row<=n-row; row++)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");

        for(col=1; col<=row; col++)
            printf("%d",col);
        for(col=row-1; col>=1; col--)
            printf("\n");
    }

    return 0;
}
