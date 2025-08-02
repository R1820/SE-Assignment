#include <stdio.h>
#include <math.h>

// Function to count number of digits
int countDigits(int num)
{
    int count = 0;
    while (num != 0)
        {
          count++;
          num /= 10;
        }
        return count;
}

// Function to check Armstrong number
int isArmstrong(int num)
{
    int original = num;
    int digits = countDigits(num);
    int sum = 0;

    while (num > 0)
        {
          int digit = num % 10;
          sum += pow(digit, digits);
          num /= 10;
        }

        return sum == original;
}

int main()
{
    int number;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check and display result
    if (isArmstrong(number))
        {
          printf("%d is an Armstrong number.\n", number);
        }
    else
        {
           printf("%d is not an Armstrong number.\n", number);
        }

    return 0;
}
