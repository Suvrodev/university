#include<stdio.h>
#include<stdlib.h>
#include"Linked_List.h"

void insert_last(int value);
void insert_first();
void print_list();
void print_list_reverse();
int insert(int data, int position);
void insert_after(int data1, int data2);
void bubble_sort();
struct Node* delete(int value);
int list_size();
void replace(int data, int new_data);
void append(int data);

int main(){
    for(int i = 0; i < 4; i++){
        append(10 + i);
    }
    print_list();
    print_list_reverse();
    // printf("List size is %d.\n", list_size());
    // printf("Value of insert1 and insert2 : ");
    // int value, position;
    // scanf("%d %d", &value, &position);
    // insert_after(value, position);
    // replace(value, position);
    // print_list();
    // printf("List size is %d.\n", list_size());
    return 0;
}