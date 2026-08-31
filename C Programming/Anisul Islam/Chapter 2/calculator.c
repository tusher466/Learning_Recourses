#include<stdio.h>
int main()
{
    double num1, num2, result;
    int digit;
    printf("Welcome to Simple Calculator\n");
    printf("1. + (Addition)\n");
    printf("2. - (Subtraction)\n");
    printf("3. * (Multiplication)\n");
    printf("4. / (Division)\n");
    printf("Select Operator(1-4):");
    scanf("%d", &digit);

    switch (digit)
    {
    case 1:
        printf("Enter 2 value: ");
        scanf("%lf%lf", &num1, &num2);
        result = num1 + num2;
        printf("Sum = %.2lf\n", result);
        break;
    
    case 2:
        printf("Enter 2 value: ");
        scanf("%lf%lf", &num1, &num2);
        result = num1 - num2;
        printf("Sub = %.2lf\n", result);
        break;

    case 3:
        printf("Enter 2 value: ");
        scanf("%lf%lf", &num1, &num2);
        result = num1 * num2;
        printf("Mul = %.2lf\n", result);
        break;

    case 4:
        printf("Enter 2 value: ");
        scanf("%lf%lf", &num1, &num2);
        result = num1 / num2;
        printf("Div = %.2lf\n", result);
        break;
    
    default:
        printf("Thanks for use!!\n");
        break;

    }

    return 0;
}