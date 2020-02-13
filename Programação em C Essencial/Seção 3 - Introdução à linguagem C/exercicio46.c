#include<stdio.h>


int main(){
    int n=0, aux=0, c=0, i=0;
    printf("Digite o numero a ser invertido: ");
    scanf("%d", &n);
    aux = n;
    while(aux>0){
        aux /= 10;
        c++;
    }
    printf("%d", c);
    aux = n;
    int inverte[c];
    for(i=0; i<c; i++){
        inverte[i] = aux % 10;
        aux /= 10;
    }

    /*while(c=getchar() != '\n'){
        n++;
    }*/

    printf("Inverter %d -> ", n);
    for(i=0; i<c; i++){
        printf("%d", inverte[i]);
    }

    return 0;
}
