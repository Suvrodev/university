#include<stdio.h>
#include<stdlib.h>

void insert_left(char value);
void traverse(int mode);

int main(){
    int size;
    printf("Write the expression length : ");
    scanf("%d", &size);
    char exp[size];
    printf("Write the expression :\n");
    scanf("%s", exp);
    for(int i = 0; i < size; i++){
        insert_left(exp[i]);
    }
    traverse(2);
    return 0;
}
