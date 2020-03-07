#include<stdio.h>
void merge(int *data, int start, int mid, int end){
    int left = mid - start + 1, right = end - mid;
    int data_left[left], data_right[right];
    for(int i = 0; i < left; i++){
        data_left[i] = data[start + i];
    }
    for(int i = 0; i < right; i++){
        data_right[i] = data[mid + 1 + i];
    }
    int i = 0, j = 0, k = start;
    for(i, j, k; i < left && j < right; k++){
        if(data_left[i] <= data_right[j]){
            data[k] = data_left[i++];
        }
        else{
            data[k] = data_right[j++];
        }
    }
    while(i < left){
        data[k++] = data_left[i++];
    }
    while(j < right){
        data[k++] = data_right[j++];
    }
}
void merge_sort(int *data, int begin, int end){
    if(begin < end){
        int mid = begin + (end - begin) / 2;
        merge_sort(data, begin, mid);
        merge_sort(data, mid + 1, end);
        merge(data, begin, mid, end);
    }
    else{
        return;
    }
}
void print_data(int *data, int size){
    printf("[");
    for(int i = 0; i < size; i++){
        printf(" %d", data[i]);
    }
    printf(" ]");
}
