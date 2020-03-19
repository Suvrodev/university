#include<stdio.h>
#include<stdlib.h>

void insert_left(char value);
void traverse(int mode);

int main(){
    // int size;
    // printf("Write the expression length : ");
    // scanf("%d", &size);
    // char exp[size];
    // printf("Write the expression :\n");
    // scanf("%s", exp);
    char *exp = "*+a-bc/-de-+fgh";
    printf("Input expression : %s\n", exp);
    printf("Transformed : ");
    for(int i = 0; i < 15; i++){
        insert_left(exp[i]);
    }
    traverse(1);
    return 0;
}
