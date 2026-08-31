#include<stdio.h>
int main()
{
    int digit;
    float celsius, fahrenheit;

    printf("Temperature conversion menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your need: ");
    scanf("%d", &digit);

    switch (digit)
    {
    case 1:
        printf("Enter temperature in fahrenheit: ");
        scanf("%f", &fahrenheit);
    
        // Convert Fahrenheit to Celsius
        celsius = (fahrenheit - 32) * 5 / 9;
    
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
        break;

    case 2:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
    
        // Convert Celsius to Fahrenheit
        fahrenheit = (celsius * 9 / 5) + 32;
    
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
        break;
    
    default:
        printf("Thanks for use!!\n");
        break;
    }

    return 0;
}