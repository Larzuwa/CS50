#include <stdio.h>
#include <cs50.h>
#include <math.h>

float change;
int convchange;
int coins;
int quarter = 25;
int dime = 10;
int nickel = 5;
int penny = 1;

int main(void)
{

    //As for the change and save on the change variable
    do
    {
        change = get_float("How much change is owed?: ");
        //printf("%.2f\n", change);
    }
    while (change < 0);

    // convert to cents and round up
    convchange = round(change * 100);
    //printf("%d", convchange);

    // Take 25 cents
    for (; convchange >= 25;)
    {
        convchange = convchange - 25;
        coins++;
    }
    // Take 10 cents
    for (; convchange >= 10;)
    {
        convchange = convchange - 10;
        coins++;
    }
    // Take 5 cents
    for (; convchange >= 5;)
    {
        convchange = convchange - 5;
        coins++;
    }

    // Take 1 cent
    for (; convchange >= 1;)
    {
        convchange = convchange - 1;
        coins++;
    }

    // Print number of needed coins
    printf("%d\n", coins);

}
