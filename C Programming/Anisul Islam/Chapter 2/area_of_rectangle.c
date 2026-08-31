#include<stdio.h>
int main()
{
    float length, width, area;
    printf("Enter 2 val: ");
    scanf("%f %f", &length, &width);

    area = length * width;   //Formula: area = length * width
    printf("Area is %.2f\n", area);

    return 0;
}