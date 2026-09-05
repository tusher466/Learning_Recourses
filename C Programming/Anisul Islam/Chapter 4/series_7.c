#include <stdio.h>
int main()

{

    // 1 x 2 x 3 x .... x n

    int n, sum = 1;
    printf("Enter any Number:\n");
    scanf("%d", &n);

    printf("1 x 2 x 3 x .... x %d", n);

    for(int i = 1; i <= n; i++)
    {
        sum *= i;
    }

    printf(" = %d\n", sum);

    return 0;
}
