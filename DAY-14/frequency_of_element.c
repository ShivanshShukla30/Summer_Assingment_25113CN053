#include <stdio.h>

int main(){
    int n,num,count=0;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",arr+i);
    }

    printf("Enter number you want frequency of:");
    scanf("%d",&num);

    for(int i=0 ;i<n ;i++)
    {
        if(arr[i]==num)
            count++;
    }
    if(count!=0)
        printf("Frequency of %d in array is %d",num,count);
    else
        printf("%d is not found in array",num);
    
    return 0;
}
