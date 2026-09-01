#include <stdio.h>
int main()
{
    for(int i = 1; i <= 20; i++)
    {
        if(i % 3 == 0)
        {
            continue; // bypass and start again loop
        }
        printf("%d\n", i);

        if(i == 12)
        {
            break; // exit from loop
        }
    }

    return 0;
}
