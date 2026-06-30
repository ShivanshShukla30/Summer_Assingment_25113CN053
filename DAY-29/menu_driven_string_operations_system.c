#include <stdio.h>

int main()
{
    char str[100];
    int i, choice, length = 0;
    char ch;

    printf("Enter a String: ");
    scanf(" %[^\n]", str);

    printf("\n----- String Menu -----\n");
    printf("1. Find Length\n");
    printf("2. Display String\n");
    printf("3. Count Vowels\n");
    printf("4. Count Digits\n");
    printf("5. Exit\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            while(str[length] != '\0')
            {
                length++;
            }
            printf("Length = %d", length);
            break;

        case 2:
            printf("String = %s", str);
            break;

        case 3:
            int count = 0;
            for(i = 0; str[i] != '\0'; i++)
            {
                ch = str[i];
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                {
                    count++;
                }
            }
            printf("Vowels = %d", count);
            break;

        case 4:
            int digit = 0;
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= '0' && str[i] <= '9')
                {
                    digit++;
                }
            }
            printf("Digits = %d", digit);
            break;

        case 5:
            printf("Program Ended.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}