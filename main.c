#include<stdio.h>
#include<stdlib.h>
#include"Linked_List.h"

void insert_last(int value);
void print_list();
void print_keys();
void insert_first();
int insert(int data, int position);

int main(){
    for(int i = 0; i < 5; i++){
        insert_last(10 + i);
    }
    print_list();
    printf("Keys : \n");
    print_keys();
    printf("Value of insert and position : ");
    int key, position;
    scanf("%d %d", &key, &position);
    int flag = insert(key, position);
    if(flag){
        printf("Position is too far.\n");
    }
    print_list();
    printf("Keys : \n");
    print_keys();
    return 0;
}