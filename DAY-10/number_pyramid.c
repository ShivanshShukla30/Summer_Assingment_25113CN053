#include <stdio.h>

int main(){
    int height;
    printf("Enter height of pyramid :");
    scanf("%d",&height);

    for(int i=1 ;i<=height ;i++)
    {
        for (int j=0; j<=height-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k<i; k++)
        {
            printf("%d",k);
        }
        for (int l = i; l>=1; l--)
        {
            printf("%d",l);
        }
    
        printf("\n");
    }
    return 0;
}

/*
    1
   121
  12321
 1234321
123454321
*/