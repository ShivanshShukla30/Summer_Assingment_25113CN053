#include <stdio.h>

int main(){
    int n,num,temp;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }

    temp=arr[0];
    for(int i=1 ;i<n ;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    for (int j = 0; j < n; j++)
    {
        printf("%d ",arr[j]);
    }
    
    
    return 0;
}
