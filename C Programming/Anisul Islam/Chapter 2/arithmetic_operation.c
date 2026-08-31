#include<stdio.h>
int main()
{
    int num1, num2, sum, sub, mul, mod;
    float div;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    printf("Sum is %d\n", sum);

    sub = num1 - num2;
    printf("Sub is %d\n", sub);

    mul = num1 * num2;
    printf("Mul is %d\n", mul);

    div =(float)num1 / num2;
    printf("Div is %.3f\n", div);

    mod = num1 % num2;
    printf("Mod is %d\n", mod);

    return 0;
}