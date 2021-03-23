#include <stdio.h>

int main(void)
{
    for (int c = getchar(); c != EOF; c = getchar())
    {
        putchar(c);
    }
}