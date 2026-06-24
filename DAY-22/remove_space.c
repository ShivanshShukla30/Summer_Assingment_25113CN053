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
            if(str[i]==32)
            {   for(int j=i ;j<strlen(str) ;j++)
                {  
                     str[j]=str[j+1];
                }

            }
    }

    puts(str);
        
    return 0;
}