#include <stdio.h>
#define MAXLINE 8

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len == MAXLINE - 1)
        {
            printf("%s", line);
            while (len == MAXLINE - 1)
            {
                len = getline(line, MAXLINE);
                printf("%s", line);
            }
        }

        printf("\n%d\n", len);
    }

    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{

    for (int i = 0; (to[i] = from[i]) != '\0'; ++i)
        ;
}
