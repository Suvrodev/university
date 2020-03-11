#include<stdlib.h>
#include<stdio.h>
#define true 1
#define false 0

void push(float value);
float pop();
float peek();

float post_eval(char** value, int value_size, int *double_value, int double_v_size){
    for(int i = 0; i < value_size; i++){
        int flag = true;
        for(int j = 0; j < double_v_size; j++){
            if(i == *(double_value + j)){
                int val = (((int)*(*(value + i)) - (int)'0') * 10) + ((int)*(*(value + i) + 1) - (int)'0');
                push((float)val);
                flag = false;
                break;
            }
        }
        if(flag){
            if(*(*(value + i)) == '+'){
                float val1 = pop(), val2 = pop();
                push(val2 + val1);
            }
            else if(*(*(value + i)) == '-'){
                float val1 = pop(), val2 = pop();
                push(val2 - val1);
            }
            else if(*(*(value + i)) == '*'){
                float val1 = pop(), val2 = pop();
                push(val2 * val1);
            }
            else if(*(*(value + i)) == '/'){
                float val1 = pop(), val2 = pop();
                push(val2 / val1);
            }
            else if(*(*(value + i)) == ')'){
                break;
            }
            else{
                int val = (int)*(*(value + i)) - (int)'0';
                push((float)val);
            }
        }
    }
    return pop();
}

void main_exp(){
    // char data[9][2] = {{'5'}, {'6'}, {'2'}, {'+'}, {'*'}, {'1', '2'}, {'4'}, {'/'}, {'-'}};
    char *data1 = "562+*", *data2 = "4/-)", *data3 = "12";
    char **exp = (char**) malloc(10  * sizeof(char*));
    int data1_size = 5, data2_size = 4;
    for(int i = 0; i < data1_size; i++){
        *(exp + i) = (char*) malloc(sizeof(char));
        *(*(exp + i)) = *(data1 + i);
    }
    *(exp + 5) = (char*) malloc(2 * sizeof(char));
    *(*(exp + 5)) = *(data3);
    *(*(exp + 5) + 1) = *(data3 + 1);
    for(int i = 6; i < 6 + data2_size; i++){
        *(exp + i) = (char*) malloc(sizeof(char));
        *(*(exp + i)) = *(data2 + i - 6);
    }
    int *d_v = (int*) malloc(sizeof(int));
    *(d_v) = 5;
    printf("%f", post_eval(exp, 10, d_v, 1));
}