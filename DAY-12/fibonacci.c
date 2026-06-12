#include <stdio.h>

void fibo(int);

int main(){
    int num ;
    printf("Enter number upto which you want series :");
    scanf("%d",&num);

    fibo(num);
    
    return 0;
}

void fibo(int num){
    int num1=0,num2=1,num3=0;
    if (num<=1)
        printf("%d",num);
    else
    {
        printf("0 1 ");
        while(num>2)
        {
            num3=num1+num2;
            printf("%d ",num3);
            num1=num2;
            num2=num3;
            num--;
        }
    }    
    
}