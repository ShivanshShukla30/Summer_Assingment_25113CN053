#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int word[20]={0},max=0,w=0,index=0;
    printf("Enter string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {   
        if(str[i] == ' ')
            w++;
        else
            word[w]++;
        
    }
    max=word[0];
    for(int i=1 ;i<=w ;i++)
    {
        if(word[i]>max)
        {
            max=word[i];
            index=i;
        }
    }

    w=0;
    for(int i=0 ;str[i] != '\0' ;i++)
    {
        if(str[i] == ' ')
            w++;
        else if(w == index)
        {
            printf("%c",str[i]);
        }
    }
    printf("\nLength = %d",max);

    return 0;
}
