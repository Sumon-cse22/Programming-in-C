#include<stdio.h>
#include<math.h>
int main()
{
  char c;

  printf("Enter Any Character:");
  scanf("%c",&c);

  if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    printf("%c is a Alphabet.",c);
  else
    printf("%c is not a Alphabet.",c);

 return 0;
}
