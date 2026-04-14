#include <stdio.h>

int main()
{

    for (int j = 1; j <= 10; j++)
    {

        for (int i = 1; i <= 5; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    for (int k = 0; k<=10; k++)
    {
        if(k>2){
            continue;
        }
        printf("%d hi ",k);
    }
    
    
    return 0;
}