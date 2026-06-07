#include <stdio.h>
#include <math.h>

int main(){
    int dcm,temp,bin=0;
    printf("Enter decimal number :");
    scanf(" %d",&dcm);

    int i=0;
    printf("Binary of %d is :",dcm);

    while(dcm>0)
    {
        temp=dcm%2;
        bin+=temp*pow(10,i);
        i++;
        dcm/=2;
    }

    printf(" %d",bin);

    return 0;
}