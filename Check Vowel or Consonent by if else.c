#include<stdio.h>
int main()
{
    char c;

    printf("Enter your Letter:");
    scanf("%c",&c);

    if(c== 'a' || c== 'e' || c== 'i' || c== 'o'|| c== 'u' || c== 'A' || c== 'E' || c== 'I' || c== 'O'|| c== 'U')
        printf("%c is a Vowel",c);
    else
        printf("%c is a Consonent",c);
    return 0;
}
