#include <stdio.h>
#include <cs50.h>
#include <math.h>


/* quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢). */

int main(void)

{
#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;


float input;
int pennies;
int quarters;
int dimes;
int nickels;
int leftover;
int total_coins;


do {
    printf("How much chang is owed?\n");
    input = get_float();

} while (input <=0);


    // Given amount is converted to pennies
    pennies = (int)round(input*100);

    // Quarters
    quarters = pennies / QUARTER;
    leftover = pennies % QUARTER;

    // Dimes
    dimes = leftover / DIME;
    leftover = leftover % DIME;

    // Nickels
    nickels = leftover / NICKEL;
    leftover = leftover % NICKEL;

    // Leftover at this stage is pennies
    total_coins = quarters + dimes + nickels + leftover;

    //Required output:
    printf("%d\n", total_coins);

    return 0;
}
