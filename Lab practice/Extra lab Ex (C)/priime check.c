#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;  // Assume number is prime

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if number is less than or equal to 1
    if (num <= 1)
        {
           isPrime = 0;
        }
    else
        {
           // Check for factors using a for loop
           for (i = 2; i <= num / 2; i++)
           {
               if (num % i == 0)
               {
                  isPrime = 0;
                  break;  // Not prime, exit loop
               }
           }
        }

    // Output result
    if (isPrime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
