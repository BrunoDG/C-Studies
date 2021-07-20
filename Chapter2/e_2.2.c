#include <stdio.h>
#define MAXLINE 1000
/**
 * Não podemos usar os operadores and -> && e or -> ||  
 */

int getline(void)
{
    int c, i;
    extern char line[];

    for (i = 0; shortCirc(c, i) < 1; ++i)
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

int shortCirc(int c, int i)
{
    if (i < MAXLINE - 1)
    {
        if ((c = getchar()) != EOF)
        {
            if (c != '\n')
            {
                return 1;
            }
        }
    }
    return 0;
}