#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("Enter any number:\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %d\n", n, fact);

    return 0;
}
