#include<stdio.h>

int main(){

    int a = 51;
    int b = 20;
    int sum = a + b;

    printf("The sum of %d and %d is %d\n", a, b, sum);


    int subtraction = a - b;
    printf("The subtraction of %d and %d is %d\n", a, b, subtraction);  

    int mul = a * b;
    printf("Multiplication of %d and %d is %d\n", a, b, mul);

    int division = a / b;
    printf("Division of %d and %d is %d\n", a, b, division);

    float float_division = (float)b / (float)a;
    printf("Float Division of %d and %d is %f\n", a, b, float_division);

    float modVal = (float)(a % b);
    printf("Modulus of %d and %d is %f\n", a, b, modVal);
    
    return 0;
}