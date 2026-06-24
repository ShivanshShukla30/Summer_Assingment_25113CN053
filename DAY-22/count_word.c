#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int word=0;
    printf("Enter string: ");
    gets(str);
    
    int i; 
    for(i=0 ;i<strlen(str) ;i++)
    {
        if((str[i]>96 & str[i]<123) || (str[i]>64 & str[i]<91))
            word++;
            
    }

    printf("Number of words in String is %d",word);
        
    return 0;
}