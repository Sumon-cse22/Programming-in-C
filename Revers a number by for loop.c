#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,rev=0,rem;

    printf("Enter Your Number: ");
    scanf("%lld", &n);

    for(; n!=0; )
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reversed Number is: %lld\n",rev);

    return 0;
}
