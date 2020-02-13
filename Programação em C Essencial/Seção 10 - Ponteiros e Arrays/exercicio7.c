#include <stdio.h>

void soma(int *somaA, int *somaB);

int main(){
    int a=5, b=20;
    printf("A = %d \nB = %d\n\n", a, b);

    soma(&a, &b);

    printf("A = %d \nB = %d\n\n", a, b);
    return 0;
}

void soma(int *somaA, int *somaB){
    *somaA += *somaA;
    *somaB += *somaB;
}
