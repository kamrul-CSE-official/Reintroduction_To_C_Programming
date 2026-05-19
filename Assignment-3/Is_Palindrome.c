#include <stdio.h>
#include <string.h>

int is_palindrome(char text[])
{
    char newTex[1000];
    int j = 0;

    int len = strlen(text);

    for (int i = len - 1; i >= 0; i--)
    {
        newTex[j] = text[i];
        j++;
    }

    newTex[j] = '\0';

    if (strcmp(text, newTex) == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char input[1000];

    scanf("%s", input);

    int result = is_palindrome(input);

    if (result == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}