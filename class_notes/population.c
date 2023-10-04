#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start_llambas;
    do
    {
        start_llambas = get_int("What is the current number of llambas? ");
    }
    while (start_llambas < 9);

    int end_llambas;
    do
    {
        end_llambas = get_int("Ending llambas: ");
    }
    while (end_llambas < start_llambas);

    //Years to get the goal
    int years = 0;
    while (start_llambas < end_llambas)
    {
        start_llambas += start_llambas / 12;
        years++;
    }
    printf("Years: %i\n", years);
}