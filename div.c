#include <stdio.h>

void main() {

    int number = 1729;
    int *p_number = &number;

    int value;
    int mod10;

    for (int i=0; i<16; i++)
    {
        printf("%d\n", number <<= 1);
    } 

}