#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int cnt = 0;
    printf("Enter any number:\n");
    scanf("%d", &n);

    if(n <= 1)
    {
        cnt++;
    }

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cnt++;
            break;
        }

    }

    if(cnt == 0)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
