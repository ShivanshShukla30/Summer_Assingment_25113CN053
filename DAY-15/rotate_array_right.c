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

    temp=arr[n-1];
    
    for(int i=n-1 ;i>=1 ;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    for (int j = 0; j < n; j++)
    {
        printf("%d ",arr[j]);
    }
    
    
    return 0;
}
