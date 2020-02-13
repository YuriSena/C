#include<stdio.h>


int main(){
    double salario, prestacao;
    printf("Informe o salario e o valor da prestacao: ");
    scanf("%lf %lf", &salario, &prestacao);
    if(prestacao > (salario*0.20)){
        printf("\nEmprestimo nao concedido\n");
    }else{
        printf("\nEmprestimo concedido\n");
    }

    return 0;
}
