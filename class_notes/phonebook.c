#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Nelson", "Rachael"};
    string numbers[] = {"07060442744", "081"};

    string name = get_string("Enter Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Number Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Number Not Found:\n");
    return 1;
}