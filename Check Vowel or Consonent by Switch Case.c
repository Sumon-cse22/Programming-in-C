#include<stdio.h>
int main()
{
    char Alphabet;

    printf("Enter any Alphabet:");
    scanf(" %c",&Alphabet);

    switch(Alphabet)
    {
        case'a':
            case'e':
                case'i':
                    case'o':
                        case'u':
                    case'A':
                case'E':
            case'I':
        case'O':
    case'U':

    printf("%c is a Vowel.",Alphabet);
        break;

        default:
            printf("%c is a Consunant.",Alphabet);
    }

    return 0;
}
