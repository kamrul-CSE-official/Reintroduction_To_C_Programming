#include<stdint.h>

int main(){

    int taka;

    printf("Enter your money: ");
    scanf("%d", &taka);

    if(taka >= 100){
        printf("I will eat berianny");
    }else if(taka >= 50){
        printf("I will eat pasta");
    }else if(taka >= 20){
        printf("I will eat rice");
    }else if(taka <= 0){
        printf("hahaha...");
    }
    else{
        printf("I will eat nothing");
    }

    return 0;
}