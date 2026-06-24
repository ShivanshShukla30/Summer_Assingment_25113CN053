#include <stdio.h>

int main(){
    int num,count=0;
    printf("Enter number :");
    scanf("%d",&num);

    for(int i=1 ;i<=num ;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Number %d is Prime number",num);
    }
    else
        printf("Number %d is not Prime number",num);

    return 0;
}