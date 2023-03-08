#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string message = get_string("Message: ");
    int binary_arr[BITS_IN_BYTE];
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        int d = message[i];
        int k = BITS_IN_BYTE - 1;
        while (k >= 0)
        {
            binary_arr[k] = d % 2;
            d = d / 2;
            k--;
        }
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            print_bulb(binary_arr[j]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
