#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num)
{
    int original = num;
    int reversed = 0;

    while (num > 0)
        {
          int digit = num % 10;
          reversed = reversed * 10 + digit;
          num /= 10;
        }

       return original == reversed;
}

int main()
{
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and display result
    if (isPalindrome(number))
        {
          printf("%d is a palindrome.\n", number);
        }
    else
        {
           printf("%d is not a palindrome.\n", number);
        }

    return 0;
}
