#include <stdio.h>

int main(){
    int n;
    printf("Enter length of array :");
    scanf("%d",&n);
    int arr1[n],arr2[n],arr3[2*n];

    printf("Enter sorted elements of 1st array :");
    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr1[i]);
    }
   
    printf("Enter sorted elements of 2nd array :");
    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Elements of array after merging is :");
    for(int i=0 ;i<2*n ;i++)
    {
        if(i<n)
            arr3[i]=arr1[i];
        else
            arr3[i]=arr2[i-n];
    }

    for(int i=0 ;i<2*n ;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}