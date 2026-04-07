#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);

    if (1.0 <= a && a <= 100.0)
    {
       printf("%.3f", a);
    }

    return 0;
}