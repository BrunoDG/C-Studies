#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius Table
    for fahr = 0, 20, ..., 300 */

int main(void)
{
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);
    }
    return 0;
}
