#include <stdio.h>


int main(){
    int a=5, *A;
    char b = 'b', *B;
    float c = 3.5, *C;

    A = &a;
    B = &b;
    C = &c;
    printf("a = %d \nb = %c \nc = %.2f\n\n", a, b, c);

    *A += 5;
    *B += 2;
    *C += 7.2;

    printf("a = %d \nb = %c \nc = %.2f", a, b, c);



    return 0;
}
