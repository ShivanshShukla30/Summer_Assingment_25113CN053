#include <stdio.h>
#include <string.h>

int main()
{
    char found, str[100];
    int count;
    printf("Enter string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count = 0, found = 0;
        for (int j = 0; j<i; j++)
        {
            if (str[i] == str[j])
            {
                found = 1;
                break;
            }
        }
        if (found != 1)
        {
            for (int j = 0; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                    count++;
            }
            printf("%c present %d times.\n", str[i], count);
        }
    }

    return 0;
}
