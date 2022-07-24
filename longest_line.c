#include <stdio.h>
#define MAXLINE 1000 /*Max input lines */

int get_line(char line[], int maxline);
void copy(char s[], char copy_s[]);

int main()
{
    int len; /*current line length*/
    int max=0; /*max length seens so far */

    char line[MAXLINE]; /*current input line*/
    char longest[MAXLINE]; /*longest line seen so far*/

    while ((len = get_line(line, MAXLINE)) >0)
    {
        if (len > max)
        {
            copy(line, longest);
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

int get_line(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!= EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    
    return i;
}

void copy(char s[], char copy_s[])
{
    int i=0;
    
    while ((copy_s[i] = s[i])!='\0')
    {
        ++i;
    }
    
}