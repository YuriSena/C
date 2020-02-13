#include<stdio.h>
#include<math.h>

int main(){
    double total, desconto, parcelado, comissao_desconto, comissao_parcelado;
    printf("Informe o total da compra: ");
    scanf("%lf", &total);
    desconto = total - (total*0.05);
    parcelado = total/3;
    comissao_desconto = desconto * 0.05;
    comissao_parcelado = total * 0.05;
    printf("\nTotal: R$%.2lf \nCom desconto: R$%.2lf \nParcelas: 3x de RS%.2lf\n", total, desconto, parcelado);
    printf("Comissao a vista: R$%.2lf \nComissao parcelado: R$%.2lf\n\n", comissao_desconto, comissao_parcelado);

    return 0;
}
