#include <stdio.h>
#define MAX 5

void percorre(int *pont);

int main(){
    int vet[MAX] = {1, 2, 3, 4, 5};
    percorre(vet);

    return 0;
}


void percorre(int *pont){
    int *aux;
    aux = pont;
    while(aux != '\0'){
        printf("valor %d\n", *aux);
        aux++;
    }
}
