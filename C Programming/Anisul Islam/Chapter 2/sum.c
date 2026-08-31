#include<stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    printf("Sum = %d\n", sum);

    float avg = 0;
    avg = sum / 2.0;

    printf("Avg = %.2f\n", avg);

    return 0;
}