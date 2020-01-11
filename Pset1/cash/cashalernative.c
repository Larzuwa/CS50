#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    // ******* VARIABLES ******
    float change;
    int quarters; //25c
    int dimes; //10c
    int nickels; //5c
    int pennies; //1c
    int totalcoins = 0;

    //******** PROGRAM TO CALCULATE THE LESS NUMBER OF COINS TO GIVE BACK TO A CUSTOMER ********

    //******** ASKING THE USER FOR HOW MUCH MONEY IS OWED AS A FLOAT - DECIMAL VALUE ********
    // FLOAT ensures that the user's input is a floating or integral value but NOT if it is negative
    // TO ENSURE THE INPUT IS NOT NEGATIVE we use a do/while loop
    do {
        change = get_float("Change owed ");
    }
    while (change < 0);

    //Floating-point values have an inherent imprecision, for example:
    //if x is 2, and y is 10, x / y = 0.200000002980232238769531250.
    //Before making change we need to convert the user’s dollars to cents (change from a float to an         int) to avoid tiny errors that might otherwise add up!

    //***** CONVERT USER'S FLOAT INPUT TO CENTS TO AVOID ERROS *******
    //will safely convert 0.20 (or even 0.200000002980232238769531250) to 20.
    pennies = round(change * 100);

    //****** LOOPS TO TAKE PERTINENT NUMBER OF EACH COIN IN PENNIES VALUE ********

    //Needed quarters 25c
    while (pennies >= 25)
    {
        pennies=pennies-25;
        totalcoins=totalcoins+1;
    }
    //Needed dimes 10c
    while (pennies >= 10)
    {
        pennies=pennies-10;
        totalcoins=totalcoins+1;
    }
    //Needed nickles 5c
    while (pennies >= 5)
    {
        pennies=pennies-5;
        totalcoins=totalcoins+1;
    }
    //Needed pennies 1c
    while (pennies >= 1)
    {
        pennies=pennies-1;
        totalcoins=totalcoins+1;
    }

    //LAST LINE OF CODE to meet automate tests, last line should only be the minimum number of coins possible: an integer followed by \n.
    printf("%d\n",totalcoins);

    return 0;
}
