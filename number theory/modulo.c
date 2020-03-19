#include<stdio.h>
#include<inttypes.h>
int main(){
    int64_t a = 1000000000000000000, b = 1000000000000000000, c = 1000000000 + 7;
    printf("%"PRId64"\n", ((a % c) * (b % c)) % c);
    return 0;
}