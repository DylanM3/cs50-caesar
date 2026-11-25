#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipher(string text); // Define prototype

int key; // Init 'key' in global scope

int main(int argc, string argv[])
{
    if (argc != 2) // Check if argument count is correct
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++) // Iterate through length of CLA input
    {
        if (!isdigit(argv[1][i])) // If CLA input is not a digit then...
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    key = atoi(argv[1]); // Convert CLA String to Int

    string text = get_string("plaintext: ");

    cipher(text); // Run plaintext through cipher function
}

void cipher(string text)
{
    int textLen = strlen(text);

    printf("ciphertext: ");

    for (int i = 0; i < textLen; i++) // Iterate through plaintext chars
    {
        if (isupper(text[i]))
        {
            printf("%c", (text[i] - 'A' + key) % 26 + 'A');
        }
        else if (islower(text[i]))
        {
            printf("%c", (text[i] - 'a' + key) % 26 + 'a');
        }
        else if (ispunct(text[i]) || isspace(text[i]))
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}
