#include <stdio.h>
int main()

{

    // 1*2 + 2*3 + 3*4 + .... + n1*n2

    int n1, n2, sum = 0, a = 1, b = 2;

    printf("Enter 2 value:\n");
    scanf("%d%d", &n1, &n2);

    printf("1x2 + 2x3 + 3x4 + .... + %dx%d", n1, n2);

    while(a <= n1 && b <= n2)
    {
        sum += (a * b);
        a++;
        b++;
    }

    printf(" = %d\n", sum);

    return 0;

}
