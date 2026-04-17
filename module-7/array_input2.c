#include <stdio.h>

int main(){


    int n = 0;
    scanf("%d", &n);
    int a[n];
    printf("Input: \n");
    for(int i=0; i<= n; i++){
        scanf("%d", &a[i]);
    }
    printf("Output: \n");
    for (int j = n; j >=0 ; j--)
    {
        printf("%d, ", a[j]);
    }
    
    return 0;
}