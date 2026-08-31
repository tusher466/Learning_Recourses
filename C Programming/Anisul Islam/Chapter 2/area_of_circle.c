#include<stdio.h>
int main()
{
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.1416 * (radius * radius); //Formula: area = 3.1416 * radius * radius
    printf("Area is %.3f\n", area);

    return 0;
}
