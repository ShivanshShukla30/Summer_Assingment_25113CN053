#include <stdio.h>

int main(){
    int n,temp;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array in sequence:");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }

    temp=arr[0];

    for(int j=0 ;j<n ;j++)
    {
        if(arr[j]!=temp)
        {
            printf("Missing element in array is :%d\n",temp);
            temp++;
        }
        temp++;
    }

    return 0;
}