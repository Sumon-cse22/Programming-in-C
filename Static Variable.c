#include<stdio.h>
void display()
{
    static int c=1;
    c+=5;
    printf("Value of c is: %d\n",c);
}
int main()
{
    display();
    display();

    return 0;
}
