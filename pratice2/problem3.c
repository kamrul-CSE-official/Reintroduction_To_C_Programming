#include <stdio.h>

int main()
{

    int a = 0;
    long long b = 0;
    float c = 0.0;
    char d;

    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%f", &c);
    scanf(" %c", &d);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%.2f\n", c);
    printf("%c\n", d);

    return 0;
}