#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 97 && ch <= 122)       // a = 97(ASCII) z = 122(ASCII)
    {
        printf("Small Letter\n");
    }

    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("Capital Letter\n");
    }

    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}