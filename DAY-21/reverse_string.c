#include <stdio.h>

int main(){
    char str[100],temp;
    int len=0;
    printf("Enter string: ");
    gets(str);

    while(str[len]!='\0')
    {
        len++;
    }   
    int i,j; 
    for(i=0 ,j=len-1 ;i<j ;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
   
    for(i=0 ;i<len ;i++)
    {
        printf("%c",str[i]);        
    }

    return 0;
}