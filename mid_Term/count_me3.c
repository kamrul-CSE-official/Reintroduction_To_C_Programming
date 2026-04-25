#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int cap[t], small[t], num[t];

    for (int i = 0; i < t; i++)
    {
        char str[10005];
        scanf("%s", str);

        cap[i] = small[i] = num[i] = 0;

        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                cap[i]++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z')
            {
                small[i]++;
            }
            else if (str[j] >= '0' && str[j] <= '9')
            {
                num[i]++;
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d %d %d\n", cap[i], small[i], num[i]);
    }

    return 0;
}