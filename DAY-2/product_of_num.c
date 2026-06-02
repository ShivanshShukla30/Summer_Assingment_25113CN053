#include <stdio.h>

int main(){
    int num,rem,prod=1;
    printf("Enter number :");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        prod*=rem;
        num/=10;
    }
    printf("Product of number is %d",prod);
    return 0;
}