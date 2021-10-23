#include <stdio.h>

int is_prime (int);

void main ()
{
    for (int number = 1; number<255; number++)
    {
        if (is_prime(number))
        {
            printf ("%d is prime\n", number);
        }
    } 
}

int is_prime (int n)
{
    int i;
    if (n < 2)
    {
        return 0;
    }

    for (i=2; i<n; i++)
    {
        if ((n%i) == 0)
        {
            return 0;
        }
    }

    return 1;
}

