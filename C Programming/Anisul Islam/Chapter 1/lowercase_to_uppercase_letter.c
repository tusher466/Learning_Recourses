#include<stdio.h>
int main()
{
    //letter convert lowercase to uppercase without using function

    // char lowercase;
    // printf("Enter any lowercase letter: ");
    // scanf("%c", &lowercase);

    // printf("The uppercase letter is: %c\n", lowercase - 32);

    //letter convert lowercase to uppercase using library function

    char lower, upper;
    printf("Enter any lowercase letter: ");
    scanf("%c", &lower);

    upper = toupper(lower);
    printf("The uppercase letter is: %c\n", upper);

    return 0;
}