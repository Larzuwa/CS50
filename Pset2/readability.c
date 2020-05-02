#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

// Function to count number of letters (a-z), (A-Z)
int count_letters(string s)
{
    // characters

    //int characters = strlen(s);
    int characters = 0;
    char letters [52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                         'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
                        };

    // compare the characters on the string to the letters and add up every time there is a match
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        for (int j = 0; j < 52; j++)
        {
            if (s[i] == letters[j])
            {
                characters++;
            }
        }

    }

    /* ******* WORKING BUT NOT ELEGANT *********
    // As it counts characters that are not letters (such as spaces) we need to rest them from the result
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == '!' || s[i] == '.' || s[i] == '?' || s[i] == ' ' || s[i] == '"' || s[i] == ',' || s[i] == ':' || s[i] == ';' || s[i] == '-')
        {
            characters--;
            // Substitute to see if there is any character that is counting as letter
            //s[i] = '*';
        }
    }
    */

    // Print the input with the substitution to see if there is any character counting as letter
    //printf("%s\n", s);

    // Return the total number of characters that are letters
    return characters;
}

// Function to count the number of words (number of spaces + 1)
int count_words(string s)
{
    int words = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == ' ')
        {
            words++;
        }
    }

    // Return the number of words which is the number of spaces +1
    return words + 1;

}

// Function to count the number of sentences (words that end with '.', '!' or '?')
int count_sentences(string s)
{
    int sentences = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == '!' || s[i] == '.' || s[i] == '?')
        {
            sentences++;
        }
    }

    // Return number of sentences
    return sentences;
}

// Main Function
int main(void)
{
    string userInput;
    int index;
    double L;
    double S;
    double letters;
    double words;
    double sentences;

    // Gets the user's input
    userInput = get_string("Text: ");

    // Prints literal text
    //printf("%s\n", userInput);

    // Prints number of characters
    //printf("%d letter(s)\n", count_letters(userInput));
    //printf("%d word(s)\n", count_words(userInput));
    //printf("%d sentence(s)\n", count_sentences(userInput));

    // Coleman-Liau index = 0.0588 * L - 0.296 * S - 15.8
    // L = number of letters per 100 words in the text, and S = the average number of sentences per 100 words)
    letters = count_letters(userInput);
    words = count_words(userInput);
    sentences = count_sentences(userInput);
    L = (letters / words * 100.00);
    S = ((sentences / words) * 100.00);
    index = round((0.0588 * L) - (0.296 * S) - 15.8);

    // Print index
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}
