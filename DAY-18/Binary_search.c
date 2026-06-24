#include <stdio.h>

int main(){
    int n,low,mid,high,key;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter sorted elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter elements you want to search in array :");
    scanf("%d",&key);

    printf("Element %d is present at position :",key);
    low=arr[0];
    high=arr[n-1];

    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==arr[mid])
        {   printf("%d",mid);
            break;
        }
        else if(key<arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }

    return -1;
}
