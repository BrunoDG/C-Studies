#include <stdio.h>

int atoi(char s[]);
int lower(int c);
int upper(int c);
int htoi(char s[]);

int main(void)
{
    //char *s = "cabo";
    //int i = atoi(s);

    //for (int c = getchar(); c != EOF; c = getchar())
    //{
    //    putchar(lower(c));
    //    putchar(upper(c));
    //}

    //printf("%d\n", i);

    int i = htoi("00"); // 0
    int j = htoi("FF"); // 255
    int k = htoi("A3"); // 163
    int l = htoi("0F"); // 15
    int m = htoi("F0"); // 240
    int n = htoi("1F"); // 31
    int o = htoi("20"); // 32

    printf("%d, %d, %d, %d, %d, %d, %d,", i, j, k, l, m, n, o);

    return 0;
}

int atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) // == isDigit(i);
        n = 10 * n + (s[i] - '0');
    return n;
}

// d = c >= '0' && c <= '9';

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int upper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}

int htoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        n *= 16;
        switch (s[i])
        {
        case 'a':
        case 'A':
            lower(s[i]);
            n += 10;
            break;
        case 'b':
        case 'B':
            lower(s[i]);
            n += 11;
            break;
        case 'c':
        case 'C':
            lower(s[i]);
            n += 12;
            break;
        case 'd':
        case 'D':
            lower(s[i]);
            n += 13;
            break;
        case 'e':
        case 'E':
            lower(s[i]);
            n += 14;
            break;
        case 'f':
        case 'F':
            lower(s[i]);
            n += 15;
            break;
        case '0':
            n += 0;
            break;
        case '1':
            n += 1;
            break;
        case '2':
            n += 2;
            break;
        case '3':
            n += 3;
            break;
        case '4':
            n += 4;
            break;
        case '5':
            n += 5;
            break;
        case '6':
            n += 6;
            break;
        case '7':
            n += 7;
            break;
        case '8':
            n += 8;
            break;
        case '9':
            n += 9;
            break;
        default:
            break;
        }
    }
    return n;
}