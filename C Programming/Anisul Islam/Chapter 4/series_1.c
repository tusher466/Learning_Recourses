#include <stdio.h>
int main()

{
    // 1 + 2 + 3 + .... + n
    
    int n, sum = 0;
    printf("Enter the last number of the series:\n");
    scanf("%d", &n);
    printf("1 + 2 + 3 + .... + %d\n", n);

    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
