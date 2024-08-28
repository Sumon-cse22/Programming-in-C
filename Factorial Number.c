#include<stdio.h>
#include<math.h>
int main()
{
  long int n,i,fact=1;

  printf("Enter Your Number:");
  scanf("%ld",&n);

  for(i=1;i<=n;i++)
  {
      fact*=i;
  }
   printf("Factorial Of %ld is: %ld",n,fact);

    return 0;
}
