#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int match;
    printf("Enter string: ");
    gets(str1);
    printf("Enter string to check: ");
    gets(str2);

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strlen(str1) != strlen(str2))
        printf("String is not rotation of main string");
    
    for (int i = 0; temp[i] != '\0'; i++)
    {
        if (str2[0] == temp[i])
        {
            match = 1;
            for (int j = i; j < (strlen(str2) + i); j++)
            {
                if (str2[j - i] == temp[j])
                    match = 1;
                else
                {
                    match = 0;
                    break;
                }
            }
            if (match == 1)
            {
                printf("String is rotation of main string");
                return 0;
            }
        }
    }

    printf("String is not rotation of main string");

    return 0;
}
