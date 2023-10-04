#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? ");
    int age = get_int("How old are you? ");
    long phone_no = get_long("Input your phone number: ");

    printf("Welcome! %s you are %i years, and your number is %li.\n", name, age, phone_no);
}