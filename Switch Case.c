#include<stdio.h>
int main()
{
    char operation;
    double n1,n2;

    printf("Enter any operator(+, -, *, /):");
    scanf("%c", &operation);

    printf("Enter two operands:");
    scanf("%lf %lf", &n1, &n2);

    switch(operation)
    {
        case '+':
        printf("%.2lf + %.2lf = %.2lf", n1, n2, n1+n2);
        break;

        case '-':
        printf("%.2lf - %.2lf = %.2lf", n1, n2, n1-n2);
        break;

        case '*':
        printf("%.2lf * %.2lf = %.2lf", n1, n2, n1*n2);
        break;

        case '/':
        printf("%.2lf / %.2lf = %.2lf", n1, n2, n1/n2);
        break;

        default:
            printf("Error! Your Operator is not correct.");
    }


    return 0;
}
