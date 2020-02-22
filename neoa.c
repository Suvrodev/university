#include<stdio.h>
#include<stdlib.h>
char* substring(char* string, int initial, int length){
    char* substr = (char*) malloc(length * sizeof(char));
    int sub_count = 0;
    for(int i = initial; i < initial + length; i++){
        *(substr + sub_count) = *(string + i);
        sub_count++;
    }
    return substr;
}

int length(){
    char* data = "Hello";
    int i = 0;
    while(*(data + i) != '\0'){
        i++;
    }
    return i;
}
