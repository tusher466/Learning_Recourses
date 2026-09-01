#include <stdio.h>
#include <math.h>
int main()

{
    double n, rem, temp, sum = 0.0;
    printf("Enter any number:\n");
    scanf("%lf", &n);

    temp = n;
    while(temp != 0)
    {
        rem = (int)temp % 10;
        sum = sum + pow(rem, 3);
        temp /= 10;
    }

    if(sum == n)
    {
        printf("%.0lf is Armstrong Number\n", n);
    }
    else
    {
        printf("Not Armstrong Number\n");
    }

    return 0;
}
