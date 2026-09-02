#include <stdio.h>
int main()
{
    int i = 1;

    print:
        printf("%d\n", i);
        i++;

        if(i < 21)
        {
            goto print;
        }

    return 0;

    /*  goto structure
        goto label
        ...................

        label:
            statements
            call label using goto
    */ 

}
