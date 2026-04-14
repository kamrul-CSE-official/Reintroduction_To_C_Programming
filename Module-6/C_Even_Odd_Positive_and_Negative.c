#include <stdio.h>

int main()
{

    int n = 0;
    int x = 0;
    int even = 0, odd = 0, neg = 0, pose = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x < 0)
        {
            neg++;
        }
        else if (x > 0)
        {
            pose++;
        }

        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pose);
    printf("Negative: %d\n", neg);
    return 0;
}