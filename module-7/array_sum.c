#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int sum = 0;
    for (int j = 0; j <= n; j++)
    {
        sum = sum + ar[j];
    }
    printf("Sum: %d", sum);
    int arrayName[5] = {1, 2, 3};
printf("%d", arrayName[4]);
    return 0;
}