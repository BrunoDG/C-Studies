#include <stdio.h>

main()
{
    int c, nl = 0, bl = 0, t = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
        else if (c == '\t')
        {
            ++t;
        }
        else if (c == ' ')
        {
            ++bl;
        }
    }
    printf("nl = %d\nt = %d\nbl = %d", nl, t, bl);
}