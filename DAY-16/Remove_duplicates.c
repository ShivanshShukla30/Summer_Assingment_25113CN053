#include <stdio.h>

int main(){
    int n,temp;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array in sequence:");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ;i<n ;i++)
    {   int temp=0;
        for(int j=0 ;j<i ;j++)
        {
            if(arr[i]==arr[j])
            {   for(int k=i ;k<n ;k++)
                 {  
                    temp=1;
                    break;
                 }
            }
        }
        if(temp==0)
        printf("%d ",arr[i]);
    }

   
    return 0;
}