#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char intercala(char str1, char str2, int tam);

int main(){
    char palavra1[50], palavra2[20];
    int tam; //tam1=0, tam2=0;
    printf("Informe as duas palavras: ");
    scanf("%[^\n]s  %[^\n]s", palavra1, palavra2);
    printf("Palavras Inseridas: \n%s\n%s", palavra1, palavra2);

    //tam1 = strlen(palavra1);
    //tam2 = strlen(palavra2);
    tam = strlen(palavra1) + strlen(palavra2);
    palavra1 = intercala(palavra1, palavra2, tam);

    printf("Palavra intercala: %s\n\n", palavra1);
    return 0;
}


char intercala(char str1, char str2, tam){
    char aux[100];
    strcpy(aux, str1);
    int i=0, j=0, k=0;
    for(i=0; i<tam; i++){
        if(i%2 == 0 && i < strlen(str1)){
            aux[i] = str1[j];
            j++;
        }else if(i%2 != 0 && i < strlen(str2)){
                aux[i] = str2[k];
                k++;
        }
    }
    /*for(i; i<tam; i++){
        if(i%2 == 0 )
    }*/
    return str1;
}
