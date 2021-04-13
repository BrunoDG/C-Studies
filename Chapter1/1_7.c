#include <stdio.h>

int power(int, int);
int power_2(int, int);
int power_r(int, int);
int power_r2(int, int);

int main()
{
    int i;

    for (int i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power_2(2, i), power_2(-3, i));

    return 0;
}

int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;

    return p;
}

int power_2(int b, int p)
{
    int ans = 1;
    while (p--)
        ans *= b;
    return ans;
}

int power_r(int bs, int n)
{
    if (n == 0)
    {
        bs = 1;
    }
    else
    {
        bs *= power_r(bs, (n - 1));
    }
    return bs;
}

int power_r2(int bs, int n)
{
    if (n == 0)
        return 1;
    else
        return bs * power_r(bs, (n - 1));
}
