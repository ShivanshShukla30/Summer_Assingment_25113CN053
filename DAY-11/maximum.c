#include <stdio.h>

int grt(int , int );

int main(){
    int num1 ,num2 ;
    printf("Enter two number :");
    scanf("%d %d",&num1,&num2);

    printf("Gratest of two number are : %d",grt(num1 , num2));
    
    return 0;
}
int grt(int num1 , int num2){
    if (num1>num2)
        return num1;
    else if(num2>num1)
        return num2;
    else
        return -1;
        
}