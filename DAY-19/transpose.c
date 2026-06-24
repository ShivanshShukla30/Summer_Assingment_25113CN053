#include <stdio.h>

int main()
{
    int row, column, temp;
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

        for (int i = 0; i < column; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (i < j)
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = temp;
                }
            }
        }

        for (int i = 0; i < column; i++)
        {
            for (int j = 0; j < row; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Transpose is only of square matrix");
    return 0;
}