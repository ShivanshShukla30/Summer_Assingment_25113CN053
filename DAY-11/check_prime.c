#include <stdio.h>

void prime(int);

int main(){
    int num ;
    printf("Enter number :");
    scanf("%d",&num);

    prime(num);
    
    return 0;
}

void prime(int num){
    int count=0;
    for(int i=1 ;i<=num ;i++)
    {
        if(num%i==0)
            count++;
    }
    if(count==2)
        printf("%d is Prime number",num);
    else
        printf("%d is not Prime number",num);
}