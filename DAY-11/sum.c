#include <stdio.h>

int sum(int , int );

int main(){
    int num1 ,num2 ;
    printf("Enter two number :");
    scanf("%d %d",&num1,&num2);

    printf("Sum of two number are : %d",sum(num1 , num2));
    
    return 0;
}
int sum(int num1 , int num2){
    return num1 + num2;
}