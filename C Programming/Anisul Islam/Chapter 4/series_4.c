#include <stdio.h>
int main()

{

    // 1 2 3 .... n
    // 2 4 6 .... n
    // 1 3 5 .... n

    int n;
    printf("Enter any number:\n");
    scanf("%d", &n);

    // for(int i = 1; i <= n; i++)
    // {
    //     printf("%d ", i);
    // }

    // int i = 2;
    // while(i <= n)
    // {
    //     printf("%d ", i);
    //     i += 2;
    // }

    int i = 1;
    do
    {
        printf("%d ", i);
        i += 2;
    } while (i <= n);
    

    return 0;
}
