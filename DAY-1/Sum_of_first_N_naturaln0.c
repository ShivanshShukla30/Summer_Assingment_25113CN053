#include <stdio.h>

int main(){
    int num,sum=0;
    printf("Enter number upto which want sum of natural no.:");
    scanf("%d",&num);
    sum=num*(num+1)/2;
    printf("sum of first %d natural no. is %d ",num,sum);

    return 0;
}