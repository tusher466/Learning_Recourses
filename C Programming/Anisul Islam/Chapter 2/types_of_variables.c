#include<stdio.h>

void newfun();
int a = 1069;   // Global Variable

int main()
{
    // int a = 1069;   // Local Variable
    printf("Inside main function a = %d\n", a);
    newfun();

    return 0;
}

void newfun()
{
    printf("Inside output function a = %d\n", a);
}