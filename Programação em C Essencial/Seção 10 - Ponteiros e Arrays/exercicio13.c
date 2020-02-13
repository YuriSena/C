#include <stdio.h>
#include <string.h>

void compara(char *p1, char *p2);

int main(){
    char string1[10], string2[10], *p1, *p2;
    printf("Digite as 2 palavras:\n");
    fflush(stdin);
    scanf("%[^\n]s", string1);
    fflush(stdin);
    scanf("%[^\n]s", string2);
    compara(string1, string2);

    //printf("\n%s %s", string1, string2);

    return 0;
}

void compara(char *p1, char *p2){
    int cont=0, tam=0, i=0; //teste=0;
    tam = strlen(p1);
    char *aux1, *aux2;
    aux1 = p1;
    aux2 = p2;
    for(i=0; i<tam; i++, aux1++){
        if(*aux1 == *aux2){
            cont++;
            aux2++;
        }
        //teste++;

    }
    if(cont == strlen(p2)){
        printf("A segunda string esta contida na primeira\n\n");
    }else{
        printf("A segunda string nao esta contida na primeira\n\n");
    }
    //printf("teste = %d", teste);
}
