#include<stdio.h>
#include<math.h>
int main()
{
    // float height, base, area;
    // printf("Enter height & base: ");
    // scanf("%f%f", &height, &base);

    // area = 0.5 * (height * base);
    // printf("Area is = %.3f\n", area);

    //Use 3 line length
    
    double a, b, c, s, area;
    printf("Enter 3 val: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    s = (a + b + c) / 2.0;                       //Formula: s = (a+b+c) / 2
    area = sqrt(s*(s - a) * (s - b) * (s - c));  //Formula: area = sqrt(s*(s-a)*(s-b)*(s-c))
    printf("Area is %.3lf\n", area);

    return 0;
}