#include <stdio.h>

int main(void)
{
    int garbage[1024];
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", garbage[i]);
    }
}