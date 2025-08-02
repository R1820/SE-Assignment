#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char str[])
{
    int count = 0;
    int inWord = 0;  // Flag to track if currently inside a word

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isspace(str[i]))
        {
            if (inWord == 0)
            {
                count++;        // New word starts
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;         // Word ends
        }
    }

    return count;
}

int main()
{
    char sentence[200];

    // Input sentence from user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    // Count and display number of words
    int wordCount = countWords(sentence);
    printf("Number of words: %d\n", wordCount);

    return 0;
}
