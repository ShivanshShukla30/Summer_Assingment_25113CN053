#include <stdio.h>

int main(){
    int n,num,count;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",arr+i);
    }

    for(int i=0 ;i<n ;i++)
    {   count=1;
        for(int j=i+1 ;j<n ;j++)
        {
            if(arr[j]==arr[i])
            {   count++;
                
            }
        }
        if(count>1)
            printf("Element %d is duplicate in array\n",arr[i]);
    }
    
    
    return 0;
}
