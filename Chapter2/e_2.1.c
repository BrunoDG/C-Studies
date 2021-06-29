#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    char of = CHAR_MAX;
    char uf = CHAR_MIN;

    printf("char_non_overflow: %d\n", of);
    printf("char_non_underflow: %d\n", uf);

    of++;
    uf--;

    printf("char_overflow: %d\n", of);
    printf("char_underflow: %d\n\n", uf);

    printf("char: %d, %d, %d\n", CHAR_MIN, CHAR_MAX, UCHAR_MAX);
    printf("int: %d, %d, %u\n", INT_MIN, INT_MAX, UINT_MAX);
    printf("short: %d, %d, %u\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    printf("long: %ld, %ld, %lu", LONG_MIN, LONG_MAX, ULONG_MAX);

    for (char i = 2; i > 0; i = i * 2)
    {
        printf("char = %d\n", i);
    }

    int j;

    for (j = 2; j > 0; j = j * 2)
    {
        printf("char = %d\n", j);
    }

    long long l;
    for (l = 2; l > 0; l = l * 2)
    {
        printf("char = %lld\n", l);
    }

    printf("ending = %lld %llx\n", l, l);

    return 0;
}

// 1 0000 0000 -> Carry -> Vai um

//   1111 1111 - 111    = 1111 1000
// 1 0000 0000 - 111    = 1111 1001
// +7 -> 0000 0111
// -7 -> 1111 1001

// Conversão de bases em C
// oct 057 = dec 47 = hex 0x2F

// Conversão de bases em Python
// oct 0o57 = dec 47 = hex 0x2F