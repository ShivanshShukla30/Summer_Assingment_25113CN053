#include <stdio.h>

int main()
{
    int row, column, sum = 0;
    printf("Enter number of row and column in matrix :");
    scanf("%d %d", &row, &column);

    int arr[row][column];

    printf("Enter elements of matrix :");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {   sum=0;
        for (int j = 0; j < column; j++)
        {   
            sum += arr[j][i];
        }
        printf("Sum of row[%d]=%d\n",i,sum);
    }
    
    return 0;
}
