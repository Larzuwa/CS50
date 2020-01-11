#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int count = 0;
    int decheight;

    //Ask the user for height, integer number
    //Keep asking if the value is not between the limit
    do
    {
        height = get_int("Enter a number between 1 and 8 for the height: ");
        decheight = height;
    }
    while (height < 1 || height > 8);

    // PIRAMID
    do
    {
        //Print the piramid, spaces
        for (int i = decheight - 1 ; i > 0; i--)
        {
            printf(" ");

        }

        // increase the number of times rows have been printed
        count ++;

        // decrease the value of the height of the piramid for the reverse piramid loop
        decheight --;

        //Print the piramid, blocks
        for (int j = 0; j < count; j++)
        {
            printf("#");

        }
        //Jump to a new line
        printf("\n");

    }
    // continue to execute while the number of rows is less than the provided height
    while (count < height);
}
