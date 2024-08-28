#include<stdio.h>
int main()
{
    int n1, n2, n3;

    printf("Enter Your Three Number:");
    scanf("%d %d %d", &n1,&n2,&n3);

    if(n1>n2 && n1>n3)
        printf("%d is Largest Number.",n1);
    else if (n2>n1 && n2> n3)
    printf("%d is Largest Number.",n2);
        else
            printf("%d is Largest Number.",n3);
    return 0;
}
