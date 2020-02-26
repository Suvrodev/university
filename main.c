#include<stdio.h>
#include<stdlib.h>
#include"Linked_List.h"

void insert_last(int value);
void print_list();
void insert_first();
int insert(int data, int position);
void bubble_sort();
struct Node* delete(int value);
int list_size();

int main(){
    for(int i = 0; i < 10; i++){
        insert_first(10 + i);
    }
    print_list();
    printf("List size is %d.\n", list_size());
    // printf("Value of insert and position : ");
    // int value, position;
    // scanf("%d %d", &value, &position);
    // delete(value);
    // int flag = insert(value, position);
    // if(flag){
    //     printf("Position is too far.\n");
    // }
    bubble_sort();
    print_list();
    printf("List size is %d.\n", list_size());
    return 0;
}