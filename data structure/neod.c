#include<stdio.h>
#include<stdlib.h>
#define Node struct node

Node{
    int value;
    Node *next;
};

void change_ptr(int* x){
    *x = 7;
}

int main(){
    int *y = NULL;
    *y = 9;
    change_ptr(y);
    printf("%d", *y);
    return 0;
}