#include<stdio.h>
int binary_search(int *data, int start, int end, int item){
    int mid = start + (end - start) / 2;
    if(data[mid] == item){
        return mid;
    }
    else if(data[mid] > item){
        binary_search(data, start, mid - 1, item);
    }
    else{
        binary_search(data, mid + 1, end, item);
    }
}

int main(){
    int data[] = {2, 7, 9, 13, 15, 18, 23, 34};
    printf("Location of 18 is %d.", binary_search(data, 0, 7, 18));
    return 0;
}
