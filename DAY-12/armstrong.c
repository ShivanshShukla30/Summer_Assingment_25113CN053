#include <stdio.h>
#include <math.h>

void armstrong(int);

int main(){
    int num ;
    printf("Enter number :");
    scanf("%d",&num);

    armstrong(num);
    
    return 0;
}

void armstrong(int num){
    int count=0,rem=0,num1=num,num2=num,temp=0;
    
    while(num1>0)
    {
        count++;
        num1/=10;
    }
    
    while (num2>0)
    {
        rem=num2%10;
        temp+=pow(rem,count);
        num2/=10;
    }
    
    if(temp==num)
        printf("%d is armstrong number",num);
    else
        printf("%d is not armstrong number",num);
}