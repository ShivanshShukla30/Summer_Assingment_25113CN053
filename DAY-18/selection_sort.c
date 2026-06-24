#include <stdio.h>

int main(){
    int n,temp,min=1;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0 ;i<n-1 ;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    printf("Sorted array is: ");
    for(int i=0 ;i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}