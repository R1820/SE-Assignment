#include <stdio.h>
int main()
{
    int num, digit, sum = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make a copy if number is negative
    if (num < 0)

        num = -num;

    // Loop to extract and sum digits
    while (num != 0)
        {
           digit = num % 10;     // Get last digit
           sum += digit;         // Add digit to sum
           num = num / 10;       // Remove last digit
        }

    // Output result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
