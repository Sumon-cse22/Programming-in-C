#include<stdio.h>
#include<math.h>
int main()
{
  int n1,n2,gcd;

  printf("Enter your 2 Number:");
  scanf("%d %d",&n1,&n2);

  for(int i=1; i<=n1 && i<=n2; i++)
  {
      if(n1%i==0 && n2%i==0)
        gcd=i;
  }

  printf("Gratest Common Divisor : %d",gcd);
    return 0;
}
