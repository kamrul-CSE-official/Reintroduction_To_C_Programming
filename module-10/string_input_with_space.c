#include <stdio.h>

int main()
{

    char s[50];
    // scanf("%s", &s);
    // printf("%s\n", s);
    // gets(s);
    fgets(s, 13, stdin);
    printf("%s", s);
    return 0;
}