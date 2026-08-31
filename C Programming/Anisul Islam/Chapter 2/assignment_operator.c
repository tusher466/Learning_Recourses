#include<stdio.h>
int main()
{
    int x;
    double y;
    printf("Enter any value: ");
    scanf("%d %lf", &x, &y);

    // x += 5;                  // x = x + 5
    // x -= 10;                 // x = x - 10
    // x *= 5;                  // x = x * 5
    // y /= 2.0;                // y = y / 2
    x %= 2;                     // x = x % 2

    printf("x = %d\n", x);
    // printf("y = %.2lf\n", y);

    return 0;
}