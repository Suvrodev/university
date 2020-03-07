#include<stdio.h>
#include<stdlib.h>
#include"Linked_List.h"

void print_data(int *data, int size);
void selection_sort(int *data, int size);
void merge_sort(int *data, int begin, int end);

int main(){
    int data[] = {8, 2, 10, 1, 5, 15, 3};
    merge_sort(data, 0, 6);
    print_data(data, 7);
    return 0;
}