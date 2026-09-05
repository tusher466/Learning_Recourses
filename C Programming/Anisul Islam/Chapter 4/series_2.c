#include <stdio.h>
int main()

{

    //1 + 2 + 3 + .... + n

    int n, sum = 0;
    int a = 1;
    printf("Enter any Number:\n");
    scanf("%d", &n);

    printf("1 + 2 + 3 + ....+ %d", n);

    while(a <= n)
    {
        sum += a;
        a++;
    }

    printf(" = %d\n", sum);

    return 0;
}
