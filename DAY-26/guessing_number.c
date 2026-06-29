#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int min = 1, max = 100, num, count = 0;

    int randnum = (rand() % 100) + 1;

    printf("GUESS NUMBER : ");
    scanf("%d", &num);

    if (num != randnum)
    {
        while (num != randnum)
        {
            if (num > randnum)
            {
                printf("Lower number please : ");
                scanf("%d",&num);
                count++;
            }
            
            else if (num < randnum)
            {
            printf("Higher number please");
                scanf("%d",&num);
                count++;
            }
        }
        printf("Number of gusses =%d and the number is =%d", count, randnum);
    }



    return 0;
}
