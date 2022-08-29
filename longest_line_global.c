#include <stdio.h>
#define MAXLINE 1000 /*Max input lines */


int max; /*max length seens so far */
char line[MAXLINE]; /*current input line*/
char longest[MAXLINE]; /*longest line seen so far*/


int get_line(void);
void copy(void);

int main()
{
    int len; /*current line length*/
    extern char line[MAXLINE];
    extern char longest[MAXLINE];
    extern int max;
    max = 0;

    while ((len = get_line()) >0)
    {
        if (len > max)
        {
            copy();
            printf("%s\n", line);
            max = len;
        }

        if (max > 0)
        {
            printf("%s\n", longest);
        }

    }
    return 0;
}

int get_line(void)
{
    int c, i;
    extern char line[];

    for (i=0; i<MAXLINE-1 && (c=getchar())!= EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    
    return i;
}

void copy(void)
{
    int i=0;
    extern char line[], longest[];
    
    while ((longest[i] = line[i])!='\0')
    {
        ++i;
    }
    
}