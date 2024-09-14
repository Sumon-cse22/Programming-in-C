#include <stdio.h>

int isSubstring(char str1[], char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; i++)
        {

        for (j = 0; str2[j] != '\0' && str1[i + j] != '\0'; j++)
        {
            if(str1[i + j] != str2[j])
                break;

        }

        if(str2[j] == '\0')
            return 1;
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1);

    printf("Enter the second string: ");
    fgets(str2);

    if(isSubstring(str1, str2))
        printf("'%s' is a substring of '%s'.\n", str2, str1);
     else
        printf("'%s' is not a substring of '%s'.\n", str2, str1);

    return 0;
}
