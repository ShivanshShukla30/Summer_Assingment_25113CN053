#include <stdio.h>

int main(){
    int n;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",arr+i);
    }

    printf("DISPLAYING ARRAY\n");

    for(int i=0 ;i<n ;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}