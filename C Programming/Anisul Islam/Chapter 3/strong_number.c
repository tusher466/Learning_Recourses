#include <stdio.h>
int main()

{
    int n, rem, temp, sum = 0;
    printf("Enter any number:\n");
    scanf("%d", &n);

    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;

        int fact = 1;
        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp /= 10;
    }

    if(sum == n)
    {
        printf("Strong Number\n");
    }
    else
    {
        printf("Not Strong Number\n");
    }

    return 0;
}
