#include<stdio.h>

void insert_first(int key, int value);
void insert_last(int key, int value);
void print_list();

int main(){
    printf("5 numbers list, Write values : ");
    for(int i = 0; i < 5; i++){
        int input;
        scanf("%d", &input);
        insert_last(i, input);
    }
    print_list();
    return 0;
}