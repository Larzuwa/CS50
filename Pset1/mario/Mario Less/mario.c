#include <stdio.h>
#include <cs50.h>

int main(void)
{

//******** Variables ***********
    int n; //Height


//******** User's input ********
    do
    {
        printf("Enter height: ");
        n = get_int();
    }
    while (n < 0 || n > 23);

//******** Piramid *************
    for (int i = 0; i < n; i++)
    {

//For each row
// Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

// Print hashes
        for (int k = 0; k < i + 2; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
    // Print row line


//******** END OF CODE *********
}


