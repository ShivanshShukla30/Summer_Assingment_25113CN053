#include <stdio.h>
#include <math.h>

int main(){
    int dcm=0,temp,bin;
    printf("Enter binary number :");
    scanf(" %d",&bin);

    int i=0;
    printf("Decimal of %d is :",bin);

    while(bin>0)
    {
        temp=bin%10;
        dcm+=temp*pow(2,i);
        i++;
        bin/=10;
    }

    printf(" %d",dcm);

    return 0;
}