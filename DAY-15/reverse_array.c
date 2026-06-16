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

   
    for(int i=0 ;i<n/2 ;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ",arr[k]);
    }
    
    
    return 0;
}
