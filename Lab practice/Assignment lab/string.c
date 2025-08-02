#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],
    str2[100];

    // Get first string from user
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    // Get second string from user
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate strings
    strcat(str1, str2);

    // Display result
    printf("Concatenated string: %s\n", str1);
    printf("Length of concatenated string: %lu\n", strlen(str1));

    return 0;
}
