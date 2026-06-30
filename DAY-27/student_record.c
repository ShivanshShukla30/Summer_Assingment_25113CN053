#include <stdio.h>

struct student_record
{   
    char name[20];
    int class;
    int roll_no;
    
};
int main(){
    
    struct student_record s[10];
    int n,i ;

    printf("Enter number of student :");
    scanf("%d",&n);

    for(i=0 ;i<n ;i++)
    {
        printf("\nSTUDENT %d\n",i+1);

        printf("Enter name of student :");
        scanf(" %[^\n]",s[i].name);

        printf("Enter class of student :");
        scanf("%d",&s[i].class);

        printf("Enter roll no. of student :");
        scanf("%d",&s[i].roll_no);
    }

    printf("\nDISPLAYING STUDENT RECORD\n");
    for(int i=0 ;i<n ;i++)
    {
        printf("\nName :%s",s[i].name);
        printf("\nClass :%d",s[i].class);
        printf("\nRoll No. :%d\n",s[i].roll_no);
    }

     return 0;
}