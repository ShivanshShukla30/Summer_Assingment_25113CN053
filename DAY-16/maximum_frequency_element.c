#include <stdio.h>

int main(){
    int n,temp,pos=0;

    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n],count[n];

    printf("Enter elements of array in sequence:");

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int j=0 ;j<n ;j++)
    {   count[j]=0;
        for(int k=0 ;k<n ;k++)
        {
            if(arr[j]==arr[k])
            {
                count[j]++;
            }
        }
    }
    
    temp=count[0];
    for(int i=0 ;i<n ;i++)
    {
        if(count[i]>=temp)
        {
            temp=count[i];
            pos=i;
        }
    }

    printf("%d has heighest frequency in array occur %d times.",arr[pos],temp);
    return 0;
}