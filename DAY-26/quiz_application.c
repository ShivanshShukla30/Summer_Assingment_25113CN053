#include <stdio.h>

int main()
{
    int choice;
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    printf("\n1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Lucknow\n4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 2)
        score++;

    printf("\n2. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 3)
        score++;

    printf("\n3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        score++;

    printf("\n4. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. **\n4. &&\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        score++;

    printf("\n5. Which loop executes at least once?\n");
    printf("1. for\n2. while\n3. do-while\n4. None\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 3)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good!\n");
    else
        printf("Need More Practice!\n");

    return 0;
}