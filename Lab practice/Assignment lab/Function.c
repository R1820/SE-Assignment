#include <stdio.h>

// Function declaration

long long factorial(int n);

int main()
{
    int number;
    long long result;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for valid input
    if (number < 0)
        {
           printf("Factorial is not defined for negative numbers.\n");
        }
    else
        {
            // Function call
            result = factorial(number);
            printf("Factorial of %d is %lld\n", number, result);
        }

    return 0;
}


// Function definition
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        {
           fact *= i;
        }
    return fact;
}
