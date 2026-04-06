#include <stdio.h>

int main()
{

    int tk;
    printf("Enter your money: ");
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("I will eat burger\n");
    }
    else if(tk >= 50){
        printf("I will eat pasta\n");
    }
    else
    {
        printf("I will eat rice\n");
    }

    return 0;
}