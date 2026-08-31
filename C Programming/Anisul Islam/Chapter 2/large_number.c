#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    {
        printf("Large = %d", num1);
    }

    else if(num2 > num1)
    {
        printf("Large = %d", num2);
    }

    else
    {
        printf("Equal\n");
    }

    return 0;
}