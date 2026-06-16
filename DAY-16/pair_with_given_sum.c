#include <stdio.h>

int main(){
    int n,sum,flag=0;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array in sequence:");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter sum :");
    scanf("%d",&sum);

    printf("PAIR IS : ");
    for(int i=0 ;i<n ;i++)
    {   for(int j=i+1 ;j<n ;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("(%d ,%d)",arr[i],arr[j]);
                flag=1;
            }
        }
    }
    if(flag==0)
        printf("No pair found");

    return 0;
}