#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Enter int val, float val, char, double val & name\n");

    scanf("%d%f %c%lf", &a, &b, &c, &d);
    printf("int val = %d\n", a);
    printf("float val = %.2f\n", b);
    printf("char = %c\n", c);
    printf("double val = %.4lf\n", d);

    char name[50];
    //scanf just input before space. scanf can't input space 
    // scanf("%s", &name);

    //gets & puts get a line from user and show it. gets can input a full line with space
    gets(name);
    puts(name);
    printf("Welcome to %s\n", name);

    //input a character use getchar and output it use putchar
    char ch;
    printf("Enter any character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);




    return 0;
}