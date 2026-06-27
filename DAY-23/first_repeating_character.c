#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int temp=0;
    printf("Enter string: ");
    gets(str);
     
    for(int i=0 ;i<strlen(str) ;i++)
    {   temp=0;
        for(int j=0 ;j<strlen(str) ;j++)
        {
            if(str[i]==str[j])
            {    temp++;
            }
        }
        if(temp==2)
        {    printf("%c is first repeating character",str[i]);
             break;
        }
    }
        
    return 0;
}