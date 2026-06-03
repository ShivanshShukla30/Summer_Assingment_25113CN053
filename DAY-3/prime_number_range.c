#include <stdio.h>

int main(){
    int l_num,h_num,count=0;
    
    printf("ENTER RANGE :\n");
    printf("Enter lowest number:");
    scanf("%d",&l_num);

    printf("Enter highest number:");
    scanf("%d",&h_num);
    
    printf("Prime numbers between %d and %d is : ",l_num,h_num);

    for(int i=l_num ;i<=h_num ;i++)
    {
        for(int j=1 ;j<=i ;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",i);
        }
        count=0;
    }

    

    return 0;
}