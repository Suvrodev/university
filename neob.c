#include"neoc.h"
#include<stdlib.h>
char* line = "    If you are reading this, you are probably spending valentine's day by yourself.\n\
    here, Ricardo sends you chocolates.";
int num = 2;
lines paragraph(){
    lines var;
    var.npar = 0;
    char* pattern = "    ";
    var.par = (int*) malloc(sizeof(int));
    int j;
    for(int i = 0; i < 124; i++){
        for(j = 0; j < 4; j++){
            if(line[i + j] != pattern[j]){
                break;
            }
        }
        if(j == 4){
            var.par = (int*) realloc(var.par, (var.npar + 1));
            *(var.par + var.npar) = i + 4;
            var.npar++;
        }
    }
    return var;
}