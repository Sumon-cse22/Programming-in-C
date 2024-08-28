#include<stdio.h>
#include<math.h>
int main()
{
 int n;

printf("Enter Your Number:");
scanf("%d",&n);

 if(n>0)
 {
     if(n<0)
        printf("%d is a Negative Number.",n);
     else
        printf("%d is a Positive Number.",n);
 }
 else
 {
     if(n<0)
         printf("%d is a Negative Number.",n);
     else
         printf("It is a zero.");
 }

    return 0;
}
