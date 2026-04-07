#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (-1 <= a && a <= 10000)
    {
        if (a * b == b || b * a == a)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }

    return 0;
}