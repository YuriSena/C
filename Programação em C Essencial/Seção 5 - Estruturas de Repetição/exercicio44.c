#include <stdio.h>


int main(){
    int fibo=0, a=1, b=1, n;
    printf("Digite o numero: ");
    scanf("%d", &n);
    printf("1 1 ");
    while(fibo <= n){
        fibo = a + b;
        b = a;
        a = fibo;
        printf("%d ", fibo);
    }

}
