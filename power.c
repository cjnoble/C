#include <stdio.h>
#define MAX_BASE 10

int power (int m, int n);

int main()
{
    
    for (int i=0; i<MAX_BASE; ++i)
    {
        printf("%d %d %d \n" , i, power(i, 2), power(i, 3));
    }

    return 0;
}

/* rasie int base to the nth pwer*/
int power(int base, int n)
{
    int result = 1;

    for (int i=1; i<=n; ++i)
    {
        result *= base;
    }
    return result;
}
