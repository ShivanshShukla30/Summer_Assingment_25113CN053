#include <stdio.h>

void perfectnum(int);

int main(){
    int num ;
    printf("Enter number :");
    scanf("%d",&num);

    perfectnum(num);
    
    return 0;
}

void perfectnum(int num){
    int pnum=0;

    for(int i=1 ;i<num ;i++)
    {
        if(num%i==0)
        {
            pnum+=i;
        }
    }
    if(pnum==num)
        printf("%d is Perfect Number",num);
    else
        printf("%d is not Perfect Number",num);
}