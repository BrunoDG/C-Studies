#include <stdio.h>

/* print Fahrenheit-Celsius Table
    for fahr = 0, 20, ..., 300 */

main()
{
    int fahr,
        celsius;
    int lower,
        upper,
        step;

    lower = 0;   /* Lower limit of temperature scale */
    upper = 300; /* Upper limit of temperature scale */
    step = 20;   /* step size of temperature scale */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/*
    (-2 ^ 31 -> (2 ^ 31) - 1) -> int -> (-2147483648 -> 2147483647)
    (-2 ^ 7 -> (2 ^ 7) - 1) -> char -> (-128 -> 127)
    (0 -> 255) -> unsigned char
*/