#include <stdio.h>
int main()

{
    int n, cnt = 0;
    printf("Enter any number:\n");
    scanf("%d", &n);

    while(n != 0)
    {
        n = n / 10;
        cnt++;
    }

    printf("Total = %d\n", cnt);

    return 0;
}
