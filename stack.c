#include<stdlib.h>
#define Node struct node

Node{
    float data;
    Node *next;
};

Node *top = NULL;

void push(float value){
    Node *new_data = (Node*) malloc(sizeof(Node));
    new_data -> data = value;
    if(!top){
        new_data -> next = NULL;
        top = new_data;
    }
    else{
        new_data -> next = top;
        top = new_data;
    }
}

float pop(){
    float data = top -> data;
    top = top -> next;
    return data;
}

float peek(){
    return top -> data;
}
