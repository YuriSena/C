#include <stdio.h>
#include <stdlib.h>



int main(){
    int *p, tam, i=0;
    printf("Tamanho do array: ");
    scanf("%d", &tam);

    p = malloc(tam * sizeof(int));
    for(i=0; i<tam; i++){
        printf("Digite um numero: ");
        scanf("%d", &p[i]);
    }

    for(i=0; i<tam; i++){
        printf("Numero(%d/%d): %d\n", i+1, tam, p[i]);
    }

    return 0;
}
