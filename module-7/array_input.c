#include <stdio.h>

int main()
{

    int ar[5];
    printf("Array input\n");
    for (int i = 0; i <= 5; i++)
    {

        scanf("%d", &ar[i]);
    }
    printf("Array output\n");
    for (int j = 0; j <= 5; j++)
    {
        printf("%d\n", ar[j]);
    }

    return 0;
}