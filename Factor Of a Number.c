#include<stdio.h>
#include<math.h>
int main()
{
  int n,i;

  printf("Enter Your Number:");
  scanf("%d",&n);
  printf("The Factors Of %d is:",n);
  for(i=1; i<=n;i++)
  {
      if(n%i==0)
        printf("%d ",i);

  }

    return 0;
}
