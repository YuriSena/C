#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
    int *p, i, x, multiplos=0;
    p = malloc(N * sizeof(int));
    for(i=0; i<N; i++){
        printf("Digite um numero: ");
        scanf("%d", &p[i]);
    }
    printf("Digite X: ");
    scanf("%d", &x);

    for(i=0; i<N; i++){
        if(x % p[i] == 0){
            multiplos++;
            printf("Multiplo de %d: %d\n", x, p[i]);
        }
    }

    return 0;
}
