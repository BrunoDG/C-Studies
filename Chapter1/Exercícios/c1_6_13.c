#include <stdio.h>

#define MAX 64

int main()
{
    int c, i, wlen[MAX];

    for (i = 0; i < MAX; ++i)
    {
        wlen[i] = 0;
    }

    for (i = 0; (c = getchar()) != EOF;)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' & c <= 'z'))
        {
            ++i;
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            wlen[i]++; // É o mesmo que wlen[i] = wlen[i] + 1;
            i = 0;
        }
    }

    for (i = 0; i < MAX; ++i)
    {
        if (wlen[i] > 0)
        {
            printf("%2d = %5d ->\t", i, wlen[i]);
            for (int j = 0; j < wlen[i]; j++)
            {
                printf("\|");
            }
            printf("\n");
        }
    }
}