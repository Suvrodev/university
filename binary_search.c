#include<stdio.h>
int binary_search(int *data, int array_size, int search_item){
    int start_point = 0, end_point = array_size -1, middle_point = (start_point + end_point) / 2;
    while (start_point <= end_point){
        if (data[middle_point] == search_item){
            return middle_point;
        }
        else if (data[middle_point] > search_item){
            end_point = middle_point - 1;
        }
        else{
            start_point = middle_point + 1;
        }
        middle_point = (start_point + end_point) / 2;
    }
    return -1;
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
    printf("Write the item you want to search : ");
    int item;
    scanf("%d", &item);
    int index = binary_search(data, size, item);
    if (index == -1){
        printf("Item not found.");
    }
    else{
        printf("%d is at index %d in the array.", item, index);
    }
    return 0;
}