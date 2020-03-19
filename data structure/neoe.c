#include<stdio.h>
#include<stdlib.h>
int length(char* text){
    int i = 0;
    while(text[i] != '\0'){
        i++;
    }
    return i;
}
char* concat(char* string1, char* string2){
    int new_length = length(string1) + length(string2);
    char* new_str = (char*) malloc(new_length * sizeof(char));
    int str1_length = length(string1);
    for(int i = 0; i < new_length; i++){
        if(i < str1_length){
            new_str[i] = string1[i];
        }
        else{
            new_str[i] = string2[i - str1_length];
        }
    }
    return new_str;
}
int main(){
    char *str = "he", *str1 = "llo", *str2 = concat(str, str1);
    printf("%s", str2);
    return 0;
}