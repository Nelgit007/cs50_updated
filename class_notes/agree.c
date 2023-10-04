#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char response = get_char("Do you agree yes (y) or not (n)? ");

    if (response == 'y' || response == 'Y')
    {
        printf("Agreed.\n");
    }
    if (response == 'n' || response == 'N')
    {
        printf("Not Agreed.\n");
    }
}