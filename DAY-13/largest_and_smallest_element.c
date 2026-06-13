#include <stdio.h>

int main(){
    int n,lnum,snum;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",arr+i);
    }
    lnum=snum=arr[0];
    for(int i=1 ;i<n ;i++)
    {
        if(arr[i]>lnum)
            lnum=arr[i];
        if(arr[i]<snum)
            snum=arr[i];
    }

    printf("Largest element of array is %d and Smallest is %d ",lnum,snum);
    return 0;
}