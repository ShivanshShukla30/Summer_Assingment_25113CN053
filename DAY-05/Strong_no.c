#include <stdio.h>

int fact(int num)
{
    int f=1;
    if(num==0 || num==1)
        return 1;
    while(num>0)
    {
        f*=num;
        num--;
    }
    return f;
}

int main(){
    int num1,num2,rem,temp=0;
    printf("Enter number :");
    scanf("%d",&num1);

    num2=num1;

    while(num1>0)
    {
        rem=num1%10;
        temp+=fact(rem);        
        num1/=10;
    }

    if(temp==num2)
        printf("%d is Strong Number",num2);
    else
        printf("%d is not Strong Number",num2);
        
    return 0;
}