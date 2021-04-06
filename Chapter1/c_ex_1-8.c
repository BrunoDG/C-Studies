#include <stdio.h>

#define _and &&
#define _or ||

main()
{
    int c, t = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t' _or c == ' ')
        {
            t++;
        }
        else
        {
            if (t > 0)
            {
                t = 0;
                putchar(' ');
            }
            putchar(c);
        }
    }
}