#include<stdio.h>
#include<math.h>

int main(){
    float ganho_dia = 30.00, liquido = 0;
    int dias_trabalhados = 0;

    printf("Informe o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);
    liquido = dias_trabalhados * ganho_dia;
    liquido += liquido * 0.08;

    printf("Ganho mensal: R$%.2f", liquido);
    return 0;
}
