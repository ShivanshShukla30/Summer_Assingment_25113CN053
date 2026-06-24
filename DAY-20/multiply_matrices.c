#include <stdio.h>

int main()
{
    int row1, row2, column1, column2;
    printf("Enter number of row and column of 1st matrix :");
    scanf("%d %d", &row1, &column1);

    printf("Enter number of row and column of 2nd matrix :");
    scanf("%d %d", &row2, &column2);

    if (column1 == row2)
    {
        int arr1[row1][column1], arr2[row2][column2], arr[row1][column2];

        printf("Enter elements of 1st matrix :");

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("Enter elements of 2nd matrix :");

        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                arr[i][j] = 0;
                for (int k = 0; k < column1; k++)
                {
                    arr[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        printf("Matrix multiplication of matrix is :\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Matrix multiplication not possible enter valid row and column");
    return 0;
}
