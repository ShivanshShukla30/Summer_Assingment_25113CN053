#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int pos,temp=0;
    printf("Enter string: ");
    gets(str);
    int count[50]={0};
    
   for(int j=0 ;j<strlen(str) ;j++)
    {   count[j]=0;
        for(int k=0 ;k<strlen(str) ;k++)
        {
            if(str[j]==str[k])
            {
                count[j]++;
            }
        }
    }
    
    temp=count[0];
    for(int i=0 ;i<strlen(str) ;i++)
    {
        if(count[i]>=temp)
        {
            temp=count[i];
            pos=i;
        }
    }

    printf("%c has heighest frequency in array occur %d times.",str[pos],temp);
        
    return 0;
}