#include<stdio.h>
#include<stdlib.h>
int main(){
    char* x = (char*) malloc(15 * sizeof(char));
    char z[15];
    fscanf(stdin, "%*s %[Saikat]", x);
    printf("%s", x);
    return 0;
}