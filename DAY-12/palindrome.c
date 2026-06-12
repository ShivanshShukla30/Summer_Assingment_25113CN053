#include <stdio.h>

void palindrome(int);

int main(){
    int num ;
    printf("Enter number :");
    scanf("%d",&num);

    palindrome(num);
    
    return 0;
}

void palindrome(int num){
    int rem=0,num1,temp=0;
    num1=num;

    while (num1>0)
    {
        rem=num1%10;
        temp=(temp*10)+rem;
        num1/=10;
    }

    if(temp==num)
        printf("%d is Palindrome number",num);
    else
        printf("%d is not Palindrome number",num);
}