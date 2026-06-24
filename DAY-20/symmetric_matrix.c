#include <stdio.h>

int main()
{
    int row, column, count = 0;
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
    {
        for (int j = 0; j < column; j++)
        {   
            if(i>j)
            {
                if(arr[i][j]!=arr[j][i])
                    count++;
            }
        }
    }
    if(count==0)
        printf("Matrix is symmertic");
    else
        printf("Matrix is not symmertic");
        

    return 0;
}
