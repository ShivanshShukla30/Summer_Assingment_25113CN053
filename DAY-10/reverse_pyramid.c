#include <stdio.h>

int main(){
    int height;
    printf("Enter height of pyramid :");
    scanf("%d",&height);

    for(int i=height ;i>0 ;i--)
    {
        for (int j=0; j<height-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (2*i-1); k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}
