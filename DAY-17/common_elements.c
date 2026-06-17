#include <stdio.h>

int main()
{
    int n1, n2, temp;

    printf("Enter length of both array:");
    scanf("%d %d", &n1, &n2);
    int arr1[n1], arr2[n2], arr[n1 + n2];

    printf("Enter elements of 1st array in sequence:");

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of 2nd array in sequence:");

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
            }
        }
    }

    return 0;
}