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

    int n3=n1+n2;
    for(int i=0 ;i<n3 ;i++)
    {   int temp=0;
        for(int j=0 ;j<i ;j++)
        {
            if(arr[i]==arr[j])
            {   
                temp=1;
                break;
            }
        }
        if(temp==1)
        printf("%d ",arr[i]);
    }

    return 0;
}