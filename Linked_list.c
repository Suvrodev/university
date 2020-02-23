#include<stdlib.h>
#include<stdio.h>
#include"Linked_List.h"

struct Node *head = NULL;

void insert_first(int key, int value){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link -> key = key;
    link -> value = value;
    link -> next = head;
    head = link;
}

void insert_last(int key, int value){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link -> key = key;
    link -> value = value;
    link -> next = NULL;
    if(head == NULL){
        head = link;
    }
    else{
        struct Node *last = head;
        while(last -> next){
            last = last -> next;
        }
        last -> next = link;
    }
}

void print_list(){
    printf("[ ");
    struct Node *var = head;
    printf("%d", var -> value);
    var = var -> next;
    while(var != NULL){
        printf(", %d", var -> value);
        var = var -> next;
    }
    printf(" ]\n");
}

struct Node* search_by_key(int key){
    struct Node *var = head;
    while(var != NULL){
        if(var -> key == key){
            return var;
        }
        var = var -> next;
    }
    return NULL;
}
struct Node* delete(int key){
    struct Node *var = head, *previous = NULL;
    while(var != NULL){
        if(var -> key == key){
            if(var == head){
                head = head -> next;
            }
            else{
                previous -> next = var -> next;
                return var;
            }
        }
        previous = var;
        var = var -> next;
    }
    return NULL;
}
