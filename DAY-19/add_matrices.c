#include <stdio.h>

int main(){
    int row ,column;
    printf("Enter number of row and column in matrix :");
    scanf("%d %d",&row ,&column);
    
    int arr1[row][column],arr2[row][column],arr[row][column];

    printf("Enter elements of 1st matrix :");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    
    printf("Enter elements of 2nd matrix :");
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",arr[i][j]);
        }printf("\n");
        
    }
    return 0;
}