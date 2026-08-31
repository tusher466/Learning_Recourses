#include<stdio.h>
int main()
{
    //Swapping using third variable

    int a,b,temp;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);

    printf("Before swapping a=%d and b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("After swapping a=%d and b=%d\n",a,b);

    // Swapping without using third variable

    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping a=%d and b=%d\n",a,b);


    return 0;
}