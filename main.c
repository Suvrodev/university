#include<stdio.h>
#include<stdlib.h>

void insert(int value);
void print();

int main(){
    int data[] = {8, 2, 10, 1, 5, 15, 3};
    for(int i = 0; i < 7; i++){
        insert(data[i]);
    }
    print();
    return 0;
}