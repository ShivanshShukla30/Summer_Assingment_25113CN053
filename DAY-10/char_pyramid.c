#include <stdio.h>

int main(){
    int height;
    printf("Enter height of pyramid :");
    scanf("%d",&height);

    for(int i=0 ;i<height ;i++)
    {
        for (int j=0; j<=height-i; j++)
        {
            printf(" ");
        }
        for (int k = 65; k<(65+i); k++)
        {
            printf("%c",k);
        }
        for (int l = (65+i); l>=65; l--)
        {
            printf("%c",l);
        }
    
        printf("\n");
    }
    return 0;
}

/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEEDCBA
*/