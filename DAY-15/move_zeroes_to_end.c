#include <stdio.h>

void swap(int* num1 , int* num2)
{
     int temp;
     temp = *num1;
    *num1 = *num2;
    *num2 = temp ;
}

int main(){
    int n,num,temp;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array :");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }

    
    for(int i=n-2 ;i>=0 ;i--)
    {
        for(int j=i ; j<n-1 ;j++)
        {            
            if(arr[j]==0)
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
        for (int k = 0; k < n; k++)
        {
            printf("%d ",arr[k]);
        }printf("\n");
    }
    
    return 0;
}
