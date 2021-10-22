#include <stdio.h>


void main ()
{
    int x = 1;

    printf("%x\n", &x);

    int *x_pointer = NULL;
    x_pointer = &x;

    printf("%d", *x_pointer);


}