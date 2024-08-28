#include<stdio.h>
#include<math.h>
int main()
{
  int n,n1=0,n2=1,next=n1+n2;

  printf("Enter The Number Of term:");
  scanf("%d",&n);

  printf("Fibonacci Series: %d %d ",n1,n2);

  for(int i=3; i<=n; i++)
  {
      printf("%d ",next);
      n1=n2;
      n2=next;
      next=n1+n2;
  }
    return 0;
}
