#include<stdio.h>
void insertion_sort(int *data, int size){
    for(int i = 1; i < size; i++){
        int to_insert = data[i];
        int position = i;
        while(position > 0 && data[position - 1] > to_insert){
            data[position] = data[position - 1];
            position--;
        }
        if(position != i){
            data[position] = to_insert;
        }
    }
}
void print_data(int *data, int size){
    printf("[");
    for(int i = 0; i < size; i++){
        printf(" %d", data[i]);
    }
    printf(" ]");
}