#include <stdio.h>

int main(){
    int row;
    printf("Enter number of row in traingle :");
    scanf("%d",&row);

    for(int i=1 ;i<=row ;i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%c",64+i);
        }
        printf("\n");
    }
    return 0;
}
