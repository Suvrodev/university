#include<stdio.h> //"Header file, needed to use 'printf()' , 'scanf()' function"
int main(){ //"Main function with integer ruturn type, your code goes inside the braces"
    int var = 10; //"Data Type Integer and a variable called var. Used to store non fraction number can be positive or negative" Data type are needed to declare which type of variable you want to store in it
    float var1 = 10.5; //"Data type Float or Floating point and variable name var1. Use this to store fraction number"
    char var2 = 'S'; //"Char or character with variable name var2. Use this to store characters/letters"
    int var3 = var + 5; // another Integer variable but here the value is equal to var variable which was 10 plus 5
    printf("%d", var2); //printf() function in c is used to print something in C language. %d inside quotation means decimal number, and after quotation we show which varibale to print. In this case var3
    printf(", Hello %f", var1); // another statement here %f is used, which is float and used to print float
    printf(", %c ", var2);//%c or character is used to print character
    return 0;//one more thing , everyline ends with a semicolon. This is not entirely true, statement ends with semicolon in C. But in somewhere they don't end with semicolon. You can see that later. Oh and // or double slash means comment things writtenn after // won't count as code
}