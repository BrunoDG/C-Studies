#include <stdio.h>

#define VTAB '\xb'
#define BELL '\x7'
#define MAXLINE 1000
#define LEAP 1
#define YEAR 31 + 28 + LEAP + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31

enum months
{
    JAN = 1,
    FEB,
    MAR,
    ABR,
    MAI,
    JUN,
    JUL,
    AGO,
    SET, // = 7, // Caso setembro seja o mês 7
    OCT,
    NOV,
    DEC
};

enum boolean
{
    NO,
    YES
};

int strlen_bg(char s[]);

int main()
{
    short int days[YEAR];
    char line[MAXLINE + 1];

    for (int k = 0; k < YEAR - 1; ++k)
    {
        days[k] = 0x6141;
    }

    for (int k = 0; k < MAXLINE; ++k)
    {
        line[k] = 0x21;
    }

    line[MAXLINE] = '\0';

    printf("%d\n", strlen_bg((char *)days));
    printf("%d", strlen_bg(line));

    return 0;
}

int strlen_bg(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        ++i;

    return i;
}