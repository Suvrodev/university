#include<stdlib.h>
#include<stdio.h>
#define Node struct node
#define true 1
#define false 0
#define bool int

Node{
    char data;
    Node *left_node;
    Node *right_node;
    bool is_full;
};

Node *root = NULL;


bool check_operator(char value){
    char operators[] = {'+', '-', '*', '/'};
    for(int i = 0; i < 4; i++){
        if(value == operators[i]){
            return true;
        }
    }
    return false;
}

Node* create_node(char value){
    Node *var = (Node*) malloc(sizeof(Node));
    var -> data = value;
    var -> left_node = NULL;
    var -> right_node = NULL;
    if(check_operator(value)){
        var -> is_full = false;
    }
    else{
        var -> is_full = true;
    }
    return var;
}

void fill_tree(Node *var){
    if(var -> right_node){
        if(var -> left_node -> is_full && var -> right_node -> is_full){
            var -> is_full = true;
            if(var != root){
                fill_tree(root);
            }
        }
        else{
            if(var -> left_node -> is_full){
                fill_tree(var -> right_node);
            }
            else{
                fill_tree(var -> left_node);
            }
        }
    }
    else{
        if(!var -> left_node -> is_full){
            fill_tree(var -> left_node);
        }
    }
}

void get_left_first(Node* var, char value){
    if(var -> left_node){
        if(!var -> left_node -> is_full){
            get_left_first(var -> left_node, value);
        }
        else{
            if(var -> right_node){
                if(!var -> right_node -> is_full){
                    get_left_first(var -> right_node, value);
                }
            }
            else{
                var -> right_node = create_node(value);
                if(!check_operator(value)){
                    fill_tree(root);
                }
            }
        }
    }
    else{
        var -> left_node = create_node(value);
    }
}

void insert_left(char value){
    if(!root){
        root = create_node(value);
    }
    else{
        get_left_first(root, value);
    }
}

void in_order(Node *var){
    if(var -> left_node){
        in_order(var -> left_node);
    }
    printf("%c", var -> data);
    if(var -> right_node){
        in_order(var -> right_node);
    }
}

void pre_order(Node *var){
    printf("%c", var -> data);
    if(var -> left_node){
        pre_order(var -> left_node);
    }
    if(var -> right_node){
        pre_order(var -> right_node);
    }
}

void post_order(Node *var){
    if(var -> left_node){
        post_order(var -> left_node);
    }
    if(var -> right_node){
        post_order(var -> right_node);
    }
    printf("%c", var -> data);
}

void traverse(int mode){
    if(mode == 1){
        in_order(root);
    }
    else if(mode == 2){
        post_order(root);
    }
    else{
        pre_order(root);
    }
}
