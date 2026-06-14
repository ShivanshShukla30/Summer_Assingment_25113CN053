#include <stdio.h>

int main(){
    int n,num,pos=0;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",arr+i);
    }

    printf("Enter number you want to find in array:");
    scanf("%d",&num);

    for(int i=0 ;i<n ;i++)
    {
        if(arr[i]==num)
            pos=i;
    }
    if(pos!=0)
        printf("%d is found in array at position %d\n",num,pos);
    else
        printf("%d is not found in array",num);
    
    return 0;
}
