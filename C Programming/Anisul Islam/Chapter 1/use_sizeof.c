#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("Size of int = %d bytes\n", sizeof(a));
    printf("Size of float = %d bytes\n", sizeof(b));
    printf("Size of char = %d byte\n", sizeof(c));
    printf("Size of double = %d bytes\n", sizeof(d));

    return 0;
}