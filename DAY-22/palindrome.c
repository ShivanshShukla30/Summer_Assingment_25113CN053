#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int match=0;
    printf("Enter string: ");
    gets(str);
    
    int i,j; 
    for(i=0 ,j=strlen(str)-1 ;i<j ;i++,j--)
    {
        if(str[i]!=str[j])
            match=1;
            break;
    }

    if(match==0)
        printf("String is Palindrome");
    else
        printf("string is not Palindrome");
    
    return 0;
}