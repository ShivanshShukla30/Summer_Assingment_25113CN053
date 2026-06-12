#include <stdio.h>

int fact(int);

int main(){
    int num ;
    printf("Enter number :");
    scanf("%d",&num);

    printf("Factorial of %d is %d ",num,fact(num));
    
    return 0;
}

int fact(int num){
    int fact=1;
    for(int i=num ;i>1 ;i--)
    {
        fact*=i;
    }
    return fact;
}