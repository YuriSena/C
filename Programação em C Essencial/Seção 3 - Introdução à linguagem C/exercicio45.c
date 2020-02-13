#include<stdio.h>
#include<stdlib.h>

int main(){
    char c, aux;
    printf("Digite o caractere a ser convertido: ");
    scanf("%c", &c);
    aux = c;
    if(c >= 65 && c < 97){
        aux += 32;
    }else if(c >=97 && c < 129){
        aux -= 32;
    }else{
        printf("Digito invalido!");
        exit(1);
    }

    printf("%c -> %c", c, aux);


    return 0;
}
