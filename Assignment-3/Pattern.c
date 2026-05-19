#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int total = 2 * n - 1;

    for (int i = 1; i <= total; i++)
    {
        int k = i;
        if (i > n)
        {
            k = total - i + 1;
        }

        for (int s = 1; s <= n - k; s++)
        {
            printf(" ");
        }

        char ch;
        if (k % 2 == 1)
            ch = '#';
        else
            ch = '-';

        // print pattern
        for (int j = 1; j <= (2 * k - 1); j++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}