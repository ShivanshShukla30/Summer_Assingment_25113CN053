#include <stdio.h>
#include<math.h>

int main(){
    int num,num1,rem,rev=0,count=0,temp=10;
    printf("Enter number :");
    scanf("%d",&num);
    num1=num;

    while(num1!=0)
    {
        rem=num1%10;
        count++;
        num1/=10;
    }
    rem=0;
    
    while(num!=0)
    {
        rem=num%10;
        rev=rev+(rem*pow(temp,count-1));
        count--;
        num/=10;
    }
    printf("Reverse of number is %d",rev);
    return 0;
}