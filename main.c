#include<stdio.h>
#include"neoc.h"
lines paragraph();
int main(){
    lines var1 = paragraph();
    printf("Paragraphs are at");
    for(int i = 0; i < var1.npar; i++){
        printf(" %d", var1.par[i]);
    }
    printf(" and total Paragraphs are %d", var1.npar);
    return 0;
}