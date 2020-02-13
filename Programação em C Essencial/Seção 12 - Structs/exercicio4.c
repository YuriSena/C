
#include <stdio.h>
#include <string.h>

struct Alunos{
    char nome[50];
    int matricula;
    float nota1, nota2, nota3, media;
}aluno[5];

int main(){
    int i=0;
    float maior_media=0, menor_media=0, maior_nota1=0;
    char galudo[30];

    for(i=0; i< 2; i++){
        printf("Nome do Aluno: ");
        scanf("%[^\n]s", aluno[i].nome);
        setbuf(stdin, NULL);

        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        setbuf(stdin, NULL);

        printf("Notas(1,2,3): ");
        scanf("%f %f %f", &aluno[i].nota1, &aluno[i].nota2, &aluno[i].nota3);
        setbuf(stdin, NULL);

        printf("\n\n");
        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;

        if(aluno[i].media > maior_media){
            maior_media = aluno[i].media;
        }else{
            menor_media = aluno[i].media;
        }

        if(maior_nota1 < aluno[i].nota1){
            maior_nota1 = aluno[i].nota1;
            strcpy(galudo, aluno[i].nome);
        }
    }

    for(i=0; i< 2; i++){
        printf("================ Aluno =================\n\n");
        printf("Nome: %s\n", strtok(aluno[i].nome, "\n"));
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Notas: 1 -> %.1f | 2 -> %.1f | 3 -> %.1f\n", aluno[i].nota1, aluno[i].nota2, aluno[i].nota3);
        printf("Media: %.1f\n", aluno[i].media);
        if(aluno[i].media >= 6){
            printf("Situacao: Aprovado\n\n");
        }else{
            printf("Situacao: Reprovado\n\n");
        }
        printf("\n");
    }
    printf("Maior nota1: %s -> %.1f\n\n", galudo, maior_nota1);

    return 0;
}
