#include <stdio.h>

void rev(int num)
{   int rem=0;
    if(num>0)
    {
        rem = num%10;
        printf("%d",rem);
        rev(num/10);
    }
}

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    printf("Reverse of %d is :",num );
    rev(num);
    
    return 0;
}
