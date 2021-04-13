#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float convert(float);

int main(void)
{
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%d\t%g\n", fahr, convert(fahr));
    }
    return 0;
}

float convert(float f)
{
    return 5.f * (f - 32.f) / 9.f;
}
