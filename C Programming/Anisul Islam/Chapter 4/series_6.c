#include <stdio.h>
int main()

{
    // 1 + 1/2 + 1/3 + .... + 1/n

    double n, sum = 0.0;
    printf("Enter any Number:\n");
    scanf("%lf", &n);

    printf("1 + 1/2 + 1/3 + .... + 1/%.0lf", n);

    for(float i = 1; i <= n; i++)
    {
        sum += (1 / i);
    }

    printf(" = %.2lf\n", sum);
}
