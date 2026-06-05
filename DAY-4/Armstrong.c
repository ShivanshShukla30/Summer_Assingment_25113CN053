#include <stdio.h>
#include <math.h>

int main(){
    int num,temp1,temp2,rem,sum=0,count=0;
    printf("Enter number :");
    scanf("%d",&num);
    temp1 = num;

    while(temp1>0)
    {
        temp1/=10;
        count++;
    }

    temp2=num;
    
    while(num>0)
    {
        rem=num%10;
        sum+=pow(rem,count);
        num/=10;
    }
    if(sum == temp2)
        printf("%d is Armstrong Number",temp2);
        
    else
        printf("%d is not Armstrong Number",temp2);

    return 0;
}
