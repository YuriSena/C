#include<stdio.h>


// peso trabalho: 2
// peso avalia��o: 3
// peso exame: 5

int main(){
    float ponderada, trabalho, avaliacao, exame;
    printf("Digite as notas: ");
    scanf("%f %f %f", &trabalho, &avaliacao, &exame);
    ponderada = ((trabalho * 2) + (avaliacao * 3) + (exame * 5))/10;
    if(ponderada >= 0 && ponderada <= 2.9){
        printf("Aluno Reprovado");
    }else if(ponderada >= 3 && ponderada <= 4.9){
        printf("Aluno em Recupera��o");
    }else
        printf("Media: %.1f -> Aluno Aprovado", ponderada);
 }
