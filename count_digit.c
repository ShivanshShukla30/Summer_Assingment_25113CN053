#include <stdio.h>

int main(){
    int num,count=0;
    printf("Enter number :");
    scanf("%d",&num);
    while(num!=0)
    {
        num/=10;
        count++;
    }
    printf("total no. of digit in number is %d",count);
    return 0;
}           