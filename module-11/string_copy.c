#include <stdio.h>
#include <string.h>

int main()
{

    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int le = strlen(b);

    printf("A: %s\n", a);
    printf("B: %s\n", b);

    for (int i = 0; i < le; i++)
    {
        a[i] = b[i];
    }

    printf("A: %s\n", a);
    printf("B: %s\n", b);

    return 0;
}