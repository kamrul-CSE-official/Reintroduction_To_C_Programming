#include <stdio.h>

int main()
{
    int a;
    float f;
    char c;
    scanf("%d", &a);
    scanf("%f", &f);
    scanf(" %c", &c);  
    

    printf("%d %f %c ", a, f, c);

    return 0;
}

// int -> 4_In_reads_bytes_
// long int -> 8bytes
// float -> 4bytes
// double -> 8bytes
// char -> 1byte