#include<stdio.h>
#include"Linked_List_D.h"
#include<stdlib.h>

struct Node_D *head = NULL, *tail = NULL;

void append(int data){
    struct Node_D *var = (struct Node_D*) malloc(sizeof(struct Node_D));
    var -> value = data;
    var -> next = NULL;
    var -> previous = NULL;
    if(head == NULL){
        head = var;
    }
    else{
        struct Node_D *current = head;
        for(current; current -> next; current = current -> next){}
        var -> previous = current;
        current -> next = var;
        tail = var;
    }
}

void print_list(){
    printf("[");
    for(struct Node_D *var = head; var != NULL; var = var -> next){
        printf(" %d", var -> value);
    }
    printf(" ]");
}

void print_list_reverse(){
    printf("[");
    for(struct Node_D *var = tail; var != NULL; var = var -> previous){
        printf(" %d", var -> value);
    }
    printf(" ]");
}