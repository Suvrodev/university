#include<stdio.h>
#include<stdlib.h>
#include"Linked_List.h"

void insert_first(int key, int value);
void insert_last(int key, int value);
void print_list();
struct Node* search_by_key(int key);
struct Node* delete(int key);

int main(){
    for(int i = 0; i < 5; i++){
        insert_last(i, 10 + i);
    }
    print_list();
    printf("Key to delete : ");
    int key;
    scanf("%d", &key);
    delete(key);
    print_list();
    return 0;
}