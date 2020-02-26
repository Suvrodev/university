#include<stdio.h>
#include"Linked_List.h"

extern struct Node *head;

void delete_first(){
    head = head -> next;
}

void delete_last(){
    struct Node *var = head;
    for(var; var -> next -> next; var = var -> next){}
    var -> next = NULL;
}
