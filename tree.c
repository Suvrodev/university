#include<stdlib.h>
#include<stdio.h>
#define Node struct Node

Node{
    int value;
    Node *left_leaf;
    Node *right_leaf;
};

Node *root = NULL;

Node* create_node(int value){
    Node *data = (Node*) malloc(sizeof(Node));
    data -> value = value;
    data -> left_leaf = NULL;
    data -> right_leaf = NULL;
    return data;
}

void recursive_add(Node *var, int value){
    if(var -> value > value){
        if(var -> left_leaf){
            recursive_add(var -> left_leaf, value);
        }
        else{
            var -> left_leaf = create_node(value);
        }
    }
    else{
        if(var -> right_leaf){
            recursive_add(var -> right_leaf, value);
        }
        else{
            var -> right_leaf = create_node(value);
        }
    }
}

void recursive_print(Node *var){
    if(var -> left_leaf){
        recursive_print(var -> left_leaf);
    }
    printf(" %d", var -> value);
    if(var -> right_leaf){
        recursive_print(var -> right_leaf);
    }
}

void insert(int value){
    if(!root){
        root = create_node(value);
    }
    else{
        recursive_add(root, value);
    }
}

void print(){
    printf("[");
    recursive_print(root);
    printf(" ]");
}
