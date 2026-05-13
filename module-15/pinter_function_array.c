#include <stdio.h>

void fun(int a[], int n){
    // a[1] = 200;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}

int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    // fun(a);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    fun(a, n);
      

    return 0;
}