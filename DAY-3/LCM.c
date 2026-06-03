#include <stdio.h>

int lcm(int num1 ,int num2)
{
    int lcm=1,i=2;
    printf("LCM of %d and %d is:",num1,num2);
    while(num1>1 || num2>1)
    {
        if(num1%i == 0 || num2%i == 0)
        {
            if(num1%i==0){
                num1=num1/i;
            }
            if(num2%i==0){
                num2=num2/i;
            }
            lcm*=i;  
        }
        else
            i++;
    }
    printf(" %d",lcm);
    return lcm;
}

int main(){
    int num1 ,num2 ;
    printf("Enter two number :");
    scanf("%d %d",&num1,&num2);

    lcm(num1,num2);   
    
    return 0;
}