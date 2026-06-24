#include <stdio.h>

int main(){
    int num,count,hpf=0;
    printf("Enter number :");
    scanf("%d",&num);

    printf("Highest Prime Factors of %d is : ",num);

    for(int i=1 ;i<=num ;i++)
    {
        if(num%i==0)
        {
            count=0;
            for(int j=1 ;j<=i ;j++)
            {
                if(i%j==0)
                    count++;
            }
            if(count==2)
                hpf=i;
        }
                
    }

    if(hpf==0)
        printf("No Prime Factor.");
    else
        printf("%d",hpf);

    return 0;
}