#include <stdio.h>

int main()
{
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Enter the index to delete: ");
    int idx;
    scanf("%d", &idx);
    for (int j = idx; j < n - 1; j++)
    {
        ar[j] = ar[j + 1];
    }
    printf("After deletion: ");
    for (int z = 0; z < n; z++)
    {
        printf("%d ", ar[z]);
    }

    return 0;
}