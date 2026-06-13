#include <stdio.h>

int main(){
    int n,sum=0;
    float avg=0;

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
        sum+=*(arr+i);
    }

    avg = (float)sum/n;
    printf("Sum of array is %d and average of array is %.2f",sum,avg);
    return 0;
}