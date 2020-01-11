#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //***** VARIABLES *******
    int n; // Height


    //***** USERS'S INPUT *****
    do
    {
        printf("Enter height: ");
        n = get_int();
    }
    while (n < 0 || n > 23);


    //***** PIRAMID ******
    for (int i = 0; i < n; i++)
    {

        //For each row print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        //For each row print hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        //***** NEW CODE FOR SECOND COLUMN ******
        //Separation
        printf("  ");

        //Second piramid
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        //OLD CODE New line
        printf("\n");
    }
    return 0;

//******** END OF CODE *********

}