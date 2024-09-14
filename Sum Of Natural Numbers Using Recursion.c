#include<stdio.h>
#include<math.h>

int sum(int n)
{
    if(n!=0)
        return n+ sum(n-1);
    else
        return 0;
}
int main()
{
    int num,result;

    printf("Enter your number:");
    scanf("%d",&num);

    result=sum(num);

    printf("Result:%d\n",result);

    return 0;
}
