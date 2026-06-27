#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int temp;
    printf("Enter string: ");
    gets(str);
     
    for(int i=0 ;i<strlen(str) ;i++)
    {   temp=0;
        for(int j=0 ;j<strlen(str) ;j++)
        {
            if(str[i]==str[j])
            {    
                temp++;
            }
        }
        if(temp==1)
            printf("%c is non repeating character\n",str[i]);
    }
        
    return 0;
}