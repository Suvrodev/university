#include<stdio.h>
int* bubble_sort(int *data, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < (size - 1); j++){
            if(data[j] > data[j + 1]){
                int temp = data[j + 1];
                data[j + 1] = data[j];
                data[j] = temp;
            }
        }
        size--;
    }
    return data;
}
int main(){
    printf("Write the array size : ");
    int size;
    scanf("%d", &size);
    printf("Write array elements : ");
    int data[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &data[i]);
    }
    int* sorted_data = bubble_sort(data, size);
    for(int i = 0; i < size; i++){
        printf("%d ", sorted_data[i]);
    }
    return 0;
}