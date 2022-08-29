#include <stdio.h>

/*count digits, white space, others*/
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10]; //Array to count each digit
    
    //Initalise to zero
    for (int i = 0; i<10; i++)
    {
        ndigit[i] = 0;
    }

    while((c=getchar()) != EOF)
    {
        if (c >= '0' && c<='9')
        {
            ++ndigit[c - '0'];
        }
        else if (c==' ' || c=='\n' || c== '\t')
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }

        printf("digits==");

    for (int i = 0; i<10; i++)
        {
            printf("%d: %d \n", i, ndigit[i]);
        }
    printf(", white space=%d, other=%d \n", nwhite, nother);

    }



    return 0;
}