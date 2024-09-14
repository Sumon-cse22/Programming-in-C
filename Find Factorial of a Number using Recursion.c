#include<stdio.h>
long long int fact(int n)
{
    if(n>=1)
        return n*fact(n-1);
    else
        return 1;
}
int main()
{
    int num;
    long long int result;

    printf("Enter your Number:");
    scanf("%d",&num);

    result=fact(num);

    printf("Factorial of %d is: %lld\n",num,result);

    return 0;
}
