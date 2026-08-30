#include<stdio.h>
int main()
{
    //letter convert uppercase to lowercase without using function

    // char uppercase;
    // printf("Enter any uppercase letter: ");
    // scanf("%c", &uppercase);

    // printf("The lowercase letter is: %c\n", uppercase + 32);

    //letter convert uppercase to lowercase using library function

    char upper, lower;
    printf("Enter any uppercase letter: ");
    scanf("%c", &upper);

    lower = tolower(upper);
    printf("The lowercase letter is: %c\n", lower);

    return 0;
}