#include <stdio.h>

void odd_even() {
    int n;
    scanf("%d", &n);

    int ar[n];

    int oddNum = 0;
    int evenNum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
        if(ar[i] % 2 == 0){
            evenNum++;
        }else{
            oddNum++;
        }
    }

    printf("%d %d", evenNum, oddNum);
}

int main() {

    odd_even();

    return 0;
}