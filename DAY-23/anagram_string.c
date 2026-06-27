#include <stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100],freq[256]={0};

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
     
    if(strlen(str1)==strlen(str2))
    {
        for(int i=0 ;i<strlen(str1) ;i++)
        {   
            freq[str1[i]]++;
            freq[str2[i]]--;
        }
        for(int j=0 ;j<256 ;j++)
        {
            if(freq[j]!=0){
                printf("string is not ansgram");
                return 0;
            }    
        }
        printf("String is anagram");
    }
    else
        printf("String is not anagram");
    return 0;
}