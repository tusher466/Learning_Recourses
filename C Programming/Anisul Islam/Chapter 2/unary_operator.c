#include<stdio.h>
int main()
{
    // int x;
    // printf("Enter any value: ");
    // scanf("%d", &x);

    // int result = +x;
    // int result = -x;
    // printf("Result is %d\n", result);

    // int a;
    // printf("Enter any value: ");
    // scanf("%d", &a);

    // int b = a++;
    // int c = ++a;
    // printf("a = %d\n", a);
    // printf("b = %d\n", b);
    // printf("c = %d\n", c);

    int a;
    printf("Enter any value: ");
    scanf("%d", &a);

    int b = a--;
    int c = --a;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}