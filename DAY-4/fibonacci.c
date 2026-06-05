#include <stdio.h>

int main(){
    int num,num1=0,num2=1,num3;
    printf("Enter number upto which series run:");
    scanf("%d",&num);

    printf("Fibonacci series upto %d is :-\n",num);
    if(num==1)
        printf("%d ",num1);

    if(num==2)
        printf("%d ",num2);
    
    else
    {
        printf("%d %d ",num1,num2);
        for(int i=3 ;i<=num ;i++)
        {
            num3=num2+num1;
            num1=num2;
            num2=num3;
            printf("%d ",num3);
        }
    }
    return 0;
}