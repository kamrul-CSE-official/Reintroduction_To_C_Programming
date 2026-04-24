#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt0 = 0;
    int fre[n];
    for (int i = 0; i < n; i++)
    {
        fre[a[i]]++;
    }

    printf("%d -> %d", 0, cnt0);

    return 0;
}