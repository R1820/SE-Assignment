#include <stdio.h>
#include<ctype.h>// for tolower()

// Function to check if a character is a vowel
int isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string
    for (int i = 0; str[i] != '\0'; i++)
        {
          char ch = str[i];

          if (isalpha(ch))
            {  // Check if character is a letter
               if (isVowel(ch))
               {
                  vowels++;
               }
               else
               {
                  consonants++;
               }
            }
        }

    // Display results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
