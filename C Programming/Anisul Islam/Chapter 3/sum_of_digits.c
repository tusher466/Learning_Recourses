#include <stdio.h>
int main()

{
    int n, sum = 0, rem, temp;
    printf("Enter any number:\n");
    scanf("%d", &n);
    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
