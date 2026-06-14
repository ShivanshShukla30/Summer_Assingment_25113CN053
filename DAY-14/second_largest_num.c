#include <stdio.h>

int main(){
    int n,lnum,slnum,pos=0;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",arr+i);
    }

    lnum=slnum=arr[0];
    
    for(int i=0 ;i<n ;i++)
    {
        if(arr[i]>=lnum)
            pos=i;
            lnum=arr[i];
    }

    if(arr[pos]==slnum)
        slnum=arr[pos+1];

    for(int i=0 ;i<n ;i++)
    {
        if(i!=pos && arr[i]>=slnum)
        {
            slnum=arr[i];
        }
    }

    printf("Second largest element of array is %d ",slnum);
    return 0;
}