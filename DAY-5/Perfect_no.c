#include <stdio.h>

int main(){
    int num,pnum=0;
    printf("Enter number :");
    scanf("%d",&num);

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

    return 0;
}