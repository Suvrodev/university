#include<stdlib.h>
#define Node struct node

Node{
    char data;
    Node *next;
};

Node *front = NULL, *rear = NULL;

void enqueue(char value){
    Node *var = (Node*) malloc(sizeof(Node));
    var -> data = value;
    if(!front){
        front = var;
    }
    else{
        rear -> next = var;
    }
    rear = var;
}

char dequeue(){
    char var = front -> data;
    front = front -> next;
    return var;
}
