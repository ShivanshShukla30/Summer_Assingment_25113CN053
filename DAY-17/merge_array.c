#include <stdio.h>

int main(){
    int n1,n2,temp;

    printf("Enter length of both array:");
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2],arr[n1+n2];
    
    printf("Enter elements of 1st array in sequence:");

    for(int i=0 ;i<n1 ;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter elements of 2nd array in sequence:");

    for(int i=0 ;i<n2 ;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(int i=0 ;i<n1+n2 ;i++)
    {
        if(i<n1)
            arr[i]=arr1[i];
        else
            arr[i]=arr2[i-n1];
    }

    for(int i=0 ;i<n1+n2 ;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}