#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_size(int x);

int main(void)
{
   // Get size of grid
   int n = get_size();

   // Print Grids
   print_size(n);

}

int get_size(void)
{
    int x;
    do
    {
        x = get_int("Size: ");
    }
    while(x < 1);
    return x;
}

void print_size(int x)
{
    for (int j = 0; j < x; j++)
    {
        for (int k = 0; k < x; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}