#include <stdio.h>

int gcd(int num1 ,int num2)
{
    int rem=1;
    printf("GCD of %d and %d is:",num1,num2);
    while(rem>0)
    {
        rem=num1%num2;
        if (rem!=0)
        {   num1=num2;
            num2=rem;
        }
    }
    printf(" %d",num2);
    return num2;
}

int main(){
    int num1 ,num2 ,rem=0;
    printf("Enter two number :");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
    {
        gcd(num1,num2);
    }
    else
        gcd(num2,num1);
    return 0;
}