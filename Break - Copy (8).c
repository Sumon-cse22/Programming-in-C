#include<stdio.h>
#include<math.h>
int main()
{
  long long int n,i,fact=1;

  printf("Enter Your Number:");
  scanf("%lld",&n);

  for(i=1;i<=n;i++)
  {
      fact*=i;
  }
   printf("Factorial Of %lld is: %lld",n,fact);

    return 0;
}
