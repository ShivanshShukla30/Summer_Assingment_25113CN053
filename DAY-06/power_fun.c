#include <stdio.h>

int main(){
    int n,x,pow=1;
    printf("Enter value of x and n {x^n} :");
    scanf(" %d %d",&x,&n);

    for(int i=1 ;i<=n ;i++)
    {
        pow*=x;
    }
    
    printf("Value of %d to the power %d is %d ",x,n,pow);
    
    return 0;
}