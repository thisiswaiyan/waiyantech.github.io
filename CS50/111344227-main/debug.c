#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //asking name
    string name = get_string("What is your name? ");

    //asking living place
    string place = get_string("Where do you live? ");

    printf("Hello, %s, from %s!\n", name, place);
}