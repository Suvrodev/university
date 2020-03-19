#include<stdio.h>

int exponent(int var, int power){
    if(power == 0){
        return 1;
    }
    return var * exponent(var, power - 1);
}

int main(){
    printf("2^4 is %d", exponent(2, 4));
    return 0;
}