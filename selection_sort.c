#include<stdio.h>
void print_data(int *data, int size){
    printf("[");
    for(int i = 0; i < size; i++){
        printf(" %d", data[i]);
    }
    printf(" ]");
}

void selection_sort(int *data, int size){
    for(int i = 0; i < size; i++){
        int minimum = data[i];
        int minimum_position;
        for(int j = i + 1; j < size; j++){
            if(minimum > data[j]){
                minimum = data[j];
                minimum_position = j;
            }
        }
        if(data[i] > minimum){
            int temp = data[i];
            data[i] = minimum;
            data[minimum_position] = temp;
        }
    }
}
