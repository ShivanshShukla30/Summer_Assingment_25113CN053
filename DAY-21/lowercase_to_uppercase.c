#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int len=0;
    printf("Enter string: ");
    gets(str);

    while(str[len]!='\0')
    {
        len++;
    }    

    for(int i=0 ;i<strlen(str) ;i++)
    {
        if(str[i]<123 & str[i]>96)
        {
            str[i]-=32;
        }
    }

    puts(str);
    
    return 0;
}