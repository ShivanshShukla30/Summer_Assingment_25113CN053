#include <stdio.h>

int sum(int num)
{   int rem=0;
    rem = num%10;
    if(num==0)
        return 0;
    else
        return rem + sum(num/10);
}

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    printf("Sum of digits of %d is %d ",num ,sum(num));
    
    return 0;
}