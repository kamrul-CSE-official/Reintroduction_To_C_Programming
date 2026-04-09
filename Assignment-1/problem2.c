#include <stdio.h>

int main()
{
    int a, b;
    long long mult;

    scanf("%d %d", &a, &b);

    mult = (long long)a * b;

    printf("%lld", mult);

    return 0;
}