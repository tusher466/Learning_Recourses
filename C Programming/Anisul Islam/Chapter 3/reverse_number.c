#include <stdio.h>
int main()

{
    int n, rem, temp, rev = 0;
    printf("Enter any Number:\n");
    scanf("%d", &n);

    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    printf("Reversed Number: %d", rev);

    return 0;
}
