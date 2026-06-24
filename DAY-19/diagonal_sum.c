#include <stdio.h>

int main()
{
    int row, column, sum=0;
    printf("Enter number of row and column in matrix :");
    scanf("%d %d", &row, &column);

    int arr[row][column];
    if (row == column)
    {
        printf("Enter elements of matrix :");

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        printf("Diagonal sum of matrix is:");

        for (int i = 0; i < column; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (i == j)
                {
                    sum += arr[i][j];
                    
                }
            }
        }
        printf("%d ",sum);
    }
    else
        printf("Diagonal sum is only of square matrix");
    return 0;
}