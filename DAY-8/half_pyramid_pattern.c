#include <stdio.h>

int main(){
    int hight;
    printf("Enter hight of pyramid :");
    scanf("%d",&hight);

    for(int i=0 ;i<hight ;i++)
    {
        for (int j=0; j<hight; j++)
        {
            if(i>=j)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}