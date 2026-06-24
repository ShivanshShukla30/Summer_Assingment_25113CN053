#include <stdio.h>

int main(){
    int num,fact=1;
    printf("Enter no. :");
    scanf("%d",&num);
    while(num!=1){
        fact=fact*num;
        num--;
    }
    printf("factorail of no. is %d",fact);
    return 0;
}