#include <stdio.h>
int main()

{

    // 0 1 1 2 3 5 8 ....

    int first = 0, second = 1;
    int cnt = 0, n, fibo;
    printf("Enter any Number:\n");
    scanf("%d", &n);

    while(cnt < n)
    {
        if(cnt <= 1)
        {
            fibo = cnt;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        printf("%d ", fibo);
        cnt++;
    }

    return 0;
}
