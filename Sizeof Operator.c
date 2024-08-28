#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size Of Int:%lu\n", sizeof(intType));
    printf("Size Of Float:%lu\n", sizeof(floatType));
    printf("Size Of Double:%lu\n", sizeof(doubleType));
    printf("Size Of Char:%zu\n", sizeof(charType));

    return 0;
}
