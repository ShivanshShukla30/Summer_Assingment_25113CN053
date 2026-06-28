#include <stdio.h>
#include<string.h>

int main(){
    char str[20],temp;
    printf("Enter 1st string :");
    gets(str);

    for(int i=0 ;str[i]!='\0';i++)
    {
        for(int j=0 ;str[j]!='\0';j++)
        {
            if(str[i]<str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    
    for(int i=0 ;str[i]!='\0' ;i++)
    {
        printf("%c",str[i]);
    }

    return 0;
}