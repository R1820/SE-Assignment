#include <stdio.h>
#include <string.h>

// Function to reverse the string
void reverseString(char str[])
{
    int len = strlen(str);
    int start = 0, end = len - 1;
    char temp;

    // Swap characters from start and end moving towards the center
    while (start < end)
        {
          temp = str[start];
          str[start] = str[end];
          str[end] = temp;
          start++;
          end--;
    }
}

int main()
{
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Call function to reverse the string
    reverseString(str);

    // Display reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
