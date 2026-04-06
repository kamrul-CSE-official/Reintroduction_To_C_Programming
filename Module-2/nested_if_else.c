#include <stdio.h>

int main()
{

    int taka;

    printf("Enter your money: ");
    scanf("%d", &taka);

    double a = 15.0/4.0;
    printf("The modulus of 15 and 4 is %f\n", a);

    if (taka >= 500)
    {
        printf("We will go cox's bazar");
        if (taka >= 10000)
        {
            printf(" also We will go to saint martins");
        }
        else
        {
            printf(" then we will come back home.");
        }
    }
    else
    {
        printf("We will not go anywhere");
    }

    return 0;
}