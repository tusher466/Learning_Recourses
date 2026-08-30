#include<stdio.h>
int main()
{
    //Octal to Hexadecimal

    // int number;
    // printf("Octal number = ");
    // scanf("%o", &number);

    // printf("Hexadecimal number = %x\n", number);

    //Hexadecimal to Octal

    int number;
    printf("Hexadecimal number = ");
    scanf("%x", &number);

    printf("Octal number = %o\n", number);

    return 0;
}