#include <stdio.h>

void print_even_numbers(int);

void main()
{
    print_even_numbers(20);  //Up to and including 20
}


void print_even_numbers(int limit)
{
    // Print even numbers from 1 up to (and including) the limit

    for (int counter =1; counter<limit+1; counter++) //+1 to include the limit
    {
        if (counter%2==0)
        {
            printf("%d\n", counter);
        }
    }
}