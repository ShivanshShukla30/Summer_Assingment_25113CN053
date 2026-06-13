#include <stdio.h>

int main(){
    int n,ceven=0,codd=0;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",arr+i);
    }
    
    for(int i=0 ;i<n ;i++)
    {
        if(arr[i]%2==0)
            ceven++;
        else
            codd++;
    }

    printf("Even element in array is %d and Odd element is %d ",ceven,codd);
    return 0;
}