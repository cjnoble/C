#include <stdio.h>

void main()
{
    int x = 10;

    while (1)
    {
        printf("%u\n", x);
        if (x < 1)
        {
            break;
        }

        x--;

    }
}