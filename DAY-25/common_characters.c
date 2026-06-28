#include <stdio.h>

int main(){
    char str1[20],str2[20];
    printf("Enter 1st string :");
    gets(str1);
    printf("Enter 2nd string :");
    gets(str2);

    for(int i=0 ;str1[i]!='\0';i++)
    {
        for(int j=0 ;str2[j]!='\0';j++)
        {
            if(str1[i]==str2[j])
                printf("%c is common in both string.\n",str1[i]);
        }
    }

    return 0;
}