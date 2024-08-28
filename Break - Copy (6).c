#include<stdio.h>
#include<math.h>
int main()
{
  int i,n,n1=0,n2=1,next=n1+n2;

  printf("Enter Your Limits:");
  scanf("%d",&n);

  printf("Your Fibonacci Series is: %d %d ",n1,n2);

  for(;next<=n;)
  {
      printf("%d ",next);

      n1=n2;
      n2=next;
      next=n1+n2;
  }

    return 0;
}
