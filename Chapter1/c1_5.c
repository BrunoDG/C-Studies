#include <stdio.h>

main()
{
    int c;

    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        printf("%d\n", (c != EOF));
        c = getchar();
    }
    printf("%d\n", EOF);
}