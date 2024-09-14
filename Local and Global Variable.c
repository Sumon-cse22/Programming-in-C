#include<stdio.h>
#include<math.h>
int globalvar=60;

int myFunction()
{
    int y=90;
    globalvar=globalvar+y;
    printf("Inside the function, x: %d\n",globalvar);
    printf("Inside the function, y: %d\n",y);
}

int main()
{
    myFunction();
    printf("Outside the function, x: %d\n",globalvar);

    return 0;
}
