#include <stdio.h>
#include <string.h>

struct Alunos{
    char nome[50];
    int matricula;
    char curso[30];
}aluno[5];

int main(){
    int i=0;
    for(i=0; i< 5; i++){
        printf("Nome do Aluno: ");
        scanf("%[^\n]s", aluno[i].nome);
        setbuf(stdin, NULL);
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        setbuf(stdin, NULL);
        printf("Curso: ");
        scanf("%[^\n]s", aluno[i].curso);
        setbuf(stdin, NULL);
        printf("\n\n");
    }

    for(i=0; i< 5; i++){
        printf("================ Aluno =================\n\n");
        printf("Nome: %s\n", strtok(aluno[i].nome, "\n"));
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Curso: %s\n", strtok(aluno[i].curso, "\n"));
        printf("\n");
    }

    return 0;
}
