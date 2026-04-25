#include <stdio.h>
#include <string.h>

int main()
{

    char cons[100000];
    scanf("%s", &cons);

    int length = strlen(cons);

    int con = 0;
    for (int i = 0; i < length; i++)
    {
        if (cons[i] != 'a' && cons[i] != 'e' && cons[i] != 'i' && cons[i] != 'o' && cons[i] != 'u')
        {
            con++;
        }
    }

    printf("%d", con);

    return 0;
}