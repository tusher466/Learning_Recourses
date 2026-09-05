#include <stdio.h>
int main()

{

    // 1 - 2 + 3 - 4 + 5 - 6 ....

    int n, sum = 0;
    printf("Enter any Number:\n");
    scanf("%d", &n);

    printf("1 - 2 + 3 - 4 + 5 - 6 ... ");

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }

    printf(" = %d\n", sum);

    return 0;
}
