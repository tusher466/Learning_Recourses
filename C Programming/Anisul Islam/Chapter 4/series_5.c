#include <stdio.h>
int main()

{

    // 1^2 + 2^2 + 3^2 + .... + n^2

    int n, sum = 0;
    printf("Enter any Number:\n");
    scanf("%d", &n);

    printf("1^2 + 2^2 + 3^2 + .... + %d^2", n);

    for(int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    printf(" = %d\n", sum);

    return 0;
}
