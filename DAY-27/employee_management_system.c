#include <stdio.h>

struct employee_record
{   
    char name[20];
    char language[10];
    int salary;
    
};
int main(){
    
    struct employee_record e[10];
    int n,i ;

    printf("Enter number of employee :");
    scanf("%d",&n);

    for(i=0 ;i<n ;i++)
    {
        printf("\nEMPLOYEE %d\n",i+1);

        printf("Enter name of employee :");
        scanf(" %[^\n]",e[i].name);

        printf("Enter language of employee :");
        scanf(" %[^\n]",e[i].language);

        printf("Enter salary of employee :");
        scanf("%d",&e[i].salary);
    }

    printf("\nDISPLAYING EMPLOYEE RECORD\n");
    for(int i=0 ;i<n ;i++)
    {
        printf("\nName :%s",e[i].name);
        printf("\nLanguage :%s",e[i].language);
        printf("\nSalary :%d\n",e[i].salary);
    }

     return 0;
}