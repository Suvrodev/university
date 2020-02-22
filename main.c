#include<stdio.h>

void insert_first(int key, int value);
void insert_last(int key, int value);
void print_list();
int search_by_key(int key);

int main(){
    printf("5 numbers list, Write values : ");
    for(int i = 0; i < 5; i++){
        int input;
        scanf("%d", &input);
        insert_last(i, input);
    }
    print_list();
    printf("\nWrite the search key : ");
    int key;
    scanf("%d", &key);
    printf("Value of key %d is %d", key, search_by_key(key));
    return 0;
}