#include <stdio.h>

int fibo(int num)
{
    if(num<=1)
        return num;
    else
        return fibo(num-1) + fibo(num-2);

}

int main(){
    int num;
    printf("Enter term of series: ");
    scanf("%d",&num);

    printf("Fibonacci series upto %d is : ",num);

    for(int i=0 ;i<num ;i++)
    {
        printf("%d ",fibo(i));
    }
    
    return 0;
}