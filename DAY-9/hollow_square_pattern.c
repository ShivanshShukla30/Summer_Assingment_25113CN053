#include <stdio.h>

int main(){
    int row;
    printf("Enter number of row in traingle :");
    scanf("%d",&row);

    for(int i=0 ;i<row ;i++)
    {
        for (int j=0; j<row; j++)
        {
            if(i==0 || j==0 || i==row-1 || j==row-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
