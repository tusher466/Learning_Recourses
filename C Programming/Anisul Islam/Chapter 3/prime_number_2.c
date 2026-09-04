#include <stdio.h>
#include <math.h>

int main()
{

    // Check a number is prime or not
    // Print prime numbers from 1 to 100
    // Print and Count prime numbers from 1 to 100
    // Sum of prime numbers from 1 to 100
    // Check, Count, Sum of prime numbers from user start to user end


    int cnt = 0;
    int count = 0;
    int sum = 0;
    int start, end;
    scanf("%d %d", &start, &end);

    for(int number = start; number <= end; number++)
    {
        cnt = 0;
        if(number <= 1)
        {
            cnt++;
        }
        else
        {
            for(int i = 2; i <= sqrt(number); i++)
            {
                if(number % i == 0)
                {
                    cnt++;
                    break;
                }
            }
        }

        if(cnt == 0)
        {
            printf("%d is a prime number\n", number);
            count++;
            sum+= number;
        }
    }

    printf("\nTotal Prime Number %d\n", count);
    printf("Sum of all prime numbers = %d\n", sum);

    return 0;
}
