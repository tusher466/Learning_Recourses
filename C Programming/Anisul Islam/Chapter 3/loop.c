#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    // for loop
    // for(int i = 0; i <= n; i++)  //for(ini)
    // {
    //     printf("%d\n", i);
    // }

    // while loop
    // int i = 0;
    // while(i <= n)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    // do while loop
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
    
    return 0;
}
