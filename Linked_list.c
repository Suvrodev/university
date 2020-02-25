#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include"Linked_List.h"

struct Node *head = NULL;

void insert_first(int value){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link -> value = value;
    link -> next = head;
    link -> key = 0;
    if(head != NULL){
        struct Node *var = head;
        while(var != NULL){
            var -> key++;
            var = var -> next;
        }
    }
    head = link;
}

struct Node* get_last(){
    struct Node* var = head;
    while(var -> next){
        var = var -> next;
    }
    return var;
}

void insert_last(int value){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link -> value = value;
    link -> next = NULL;
    if(head == NULL){
        link -> key = 0;
        head = link;
    }
    else{
        struct Node *last = get_last();
        link -> key = last -> key + 1;
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

void print_keys(){
    printf("[ ");
    struct Node *var = head;
    printf("%d", var -> key);
    var = var -> next;
    while(var != NULL){
        printf(", %d", var -> key);
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

int insert(int data, int position){
    if(get_last() -> key + 1 >= position){
        bool flag = 0;
        struct Node *var1 = (struct Node*) malloc(sizeof(struct Node));
        var1 -> value = data;
        if(head -> key == position){
            var1 -> key = head -> key;
            var1 -> next = head;
            head = var1;
            struct Node* var = head -> next;
            while(var != NULL){
                var -> key++;
                var = var -> next;
            }
        }
        else if(get_last() -> key + 1 == position){
            insert_last(data);
        }
        else{
            struct Node* var = head;
            struct Node* previous = NULL;
            while(var != NULL){
                if(var -> key == position){
                    flag = 1;
                    var1 -> key = var -> key;
                    previous -> next = var1;
                    var1 -> next = var;
                }
                if(flag){
                    var -> key++;
                }
                previous = var;
                var = var -> next;
            }
        }
        return 0;
    }
    else{
        return 1;
    }
}
