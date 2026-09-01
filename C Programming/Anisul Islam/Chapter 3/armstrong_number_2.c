#include <stdio.h>
int main()

{
    int start, end;
    int temp, rem, sum = 0;
    printf("Enter 2 Numbers:\n");
    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++)
    {
        temp = i;
        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp /= 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
        
        sum = 0;

    }
    

    return 0;
}
