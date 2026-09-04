#include <stdio.h>
int main()

{
    int n, temp, rem, rev;
    printf("Enter any Number:\n");
    scanf("%d", &n);

    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    if(n == rev)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
