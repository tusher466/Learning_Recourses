#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
    
    return 0;
}