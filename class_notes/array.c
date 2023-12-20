#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prevents input of any number less than 1
    int length;
    do
    {
        //Ask user to input array length
        length = get_int("Length: ");
    }
    while (length < 1);

    //Declear array
    int twice[length];

    //Set the value of index 0 to 1
    twice[0] = 1;
    printf("%i\n", twice[0]);

    for (int i = 1; i < length; i++)
    {
        //Make recurring index value twice previous
        twice[i] = 2 * twice[i - 1];
        printf("%i\n", twice[i]);
    }

}