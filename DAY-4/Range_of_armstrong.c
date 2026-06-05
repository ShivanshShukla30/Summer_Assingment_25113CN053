#include <stdio.h>
#include <math.h>

int main(){
    int Lnum,Hnum,temp1,temp2,rem,sum=0,count=0;
    
    printf("Enter lowest number :");
    scanf("%d",&Lnum);

    printf("Enter highest number :");
    scanf("%d",&Hnum);

    printf("Armstrong number between %d and %d is :",Lnum,Hnum);
    
    for(int i=Lnum ;i<=Hnum ;i++)
    {
        temp1=i;
        while(temp1>0)
        {
            temp1/=10;
            count++;
        }

        temp2=i;
    
        while(temp2>0)
        {
            rem=temp2%10;
            sum+=pow(rem,count);
            temp2/=10;
        }
        if(sum == i)
            printf("%d ",i);
        count=0;
        sum=0;

    }

    return 0;
}
