#include <stdio.h>

int main()
{
    char str[10005];
    scanf("%s", str);

    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}