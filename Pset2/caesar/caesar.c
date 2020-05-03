#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <math.h>
#include <ctype.h>



char letters [52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
                    };
string key;
string validkey;
int main(int argc, string argv[])

{
    // Checks if the provided argument has two commands (the program + the key)
    // When the argument meets the requirements (just one argument)
    if (argc == 2)
    {
        key = argv[1];
        // We want to check that the key provided meets the requirements (is an integer)
        // For that we compare each character of the key against the numbers array
        for (int i = 0, n = strlen(key); i < n; i++)
        {
            if (isdigit(key[i]))
            {
                validkey += key[i];
            }

            else
            {
                printf("Usage: ./caesar key \n");
                return 1;
            }

        }
        printf("Success\n");

    }

    // If the program does not meet the requirements (no arguments or more than 2)
    else
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }

}
