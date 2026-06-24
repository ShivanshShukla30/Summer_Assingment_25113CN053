#include <stdio.h>

int main(){
    char str[100],comp[11]="aeiouAEIOU";
    int len=0,vowel=0,consonant=0;
    printf("Enter string: ");
    gets(str);

    while(str[len]!='\0')
    {
        len++;
    }    

    for(int i=0 ;i<len ;i++)
    {   
        int count=0;
        for(int j=0 ;j<=11 ;j++)
        {
            if(str[i]==comp[j])
            {   vowel++;
                count=1;
                break;
            }
        }if(count==0)
            consonant++;
    }

    printf("Total no. of Vowel is %d and Consonant is %d.",vowel,consonant);
    return 0;
}