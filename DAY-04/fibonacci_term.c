#include <stdio.h>

int main(){
    int num,num1=0,num2=1,num3;
    printf("Enter term of series you want:");
    scanf("%d",&num);

    printf("%d term of Fibonacci series is :- ",num);
    if(num==1)
        printf("%d ",num1);

    if(num==2)
        printf("%d ",num2);
    
    else
    {
        for(int i=3 ;i<=num ;i++)
        {
            num3=num2+num1;
            num1=num2;
            num2=num3;
        }
        printf("%d ",num3);
    }
    return 0;
}