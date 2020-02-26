#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include"Linked_List.h"

struct Node *head = NULL;

void insert_first(int value){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link -> value = value;
    link -> next = head;
    head = link;
}

struct Node* get_last(){
    struct Node* var = head;
    for(var; var -> next; var = var -> next){}
    return var;
}

int list_size(){
    int size = 0;
    for(struct Node *var = head; var != NULL; size++, var = var -> next){}
    return size;
}

void insert_last(int value){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link -> value = value;
    link -> next = NULL;
    if(head == NULL){
        head = link;
    }
    else{
        struct Node *last = get_last();
        last -> next = link;
    }
}

void print_list(){
    printf("[ ");
    struct Node *var = head;
    printf("%d", var -> value);
    for(var = var -> next; var != NULL; var = var -> next){
        printf(", %d", var -> value);
    }
    printf(" ]\n");
}

struct Node* delete(int value){
    for(struct Node *var = head, *previous = NULL; var != NULL; previous = var, var = var -> next){
        if(var -> value == value){
            if(var == head){
                head = head -> next;
            }
            else{
                previous -> next = var -> next;
                return var;
            }
        }
    }
    return NULL;
}

int insert(int data, int position){
    if(list_size() >= position){
        struct Node *var1 = (struct Node*) malloc(sizeof(struct Node));
        var1 -> value = data;
        if(0 == position){
            var1 -> next = head;
            head = var1;
        }
        else if(list_size() == position){
            insert_last(data);
        }
        else{
            int count = 0;
            for(struct Node* var = head, *previous = NULL; var != NULL; previous = var, var = var -> next, count++){
                if(count == position){
                    previous -> next = var1;
                    var1 -> next = var;
                }
            }
        }
        return 0;
    }
    else{
        return 1;
    }
}

void bubble_sort(){
    for(int i = 0; i < list_size() - 1; i++){
        for(struct Node *var = head; var -> next; var = var -> next){
            if(var -> value > var -> next -> value){
                int temp = var -> value;
                var -> value = var -> next -> value;
                var -> next -> value = temp;
            }
        }
    }
}
