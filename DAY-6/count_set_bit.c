#include <stdio.h>
#include <math.h>

int main(){
    int dcm,temp,bin=0,count=0;
    printf("Enter decimal number :");
    scanf(" %d",&dcm);

    int i=0;
    printf("count set (means number of 1's) in %d is ",dcm);

    while(dcm>0)
    {
        temp=dcm%2;
        bin+=temp*pow(10,i);
        i++;
        dcm/=2;
    }

    while(bin>0)
    {
        if(bin%10 == 1)
            count++;
        bin/=10;
    }

    printf("%d",count);

    return 0;
}