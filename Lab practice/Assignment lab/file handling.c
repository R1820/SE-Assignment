#include <stdio.h>
int main()
{
    FILE *fp;
    char str[] = "Hello, this is a file I/O example in C!";
    char ch;

    // Step 1: Create and write to a file
    fp = fopen("hello.c", "w"); // Open for writing
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(fp, "%s", str); // Write string to file
    fclose(fp); // Close the file after writing
    printf("Data written to file successfully.\n");

    // Step 2: Open and read from the file
    fp = fopen("hello.c", "r"); // Open for reading
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch); // Print each character
    }

    fclose(fp); // Close the file after reading

    return 0;
}
