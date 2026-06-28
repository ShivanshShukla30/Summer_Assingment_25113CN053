#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][50], temp[50];
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strlen(str[i]) > strlen(str[j]))
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}