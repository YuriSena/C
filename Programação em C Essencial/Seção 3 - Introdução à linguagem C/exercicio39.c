#include<stdio.h>
#include<math.h>


int main(){
    float premio = 780000, primeiro=0, segundo=0, terceiro=0;
    primeiro = premio*0.46;
    segundo = premio*0.32;
    terceiro = premio - primeiro - segundo;
    printf("Premio Total: %.2f \n\nPrimeiro Ganhador: %.2f \nSegundo Ganhador: %.2f \nTerceiro Ganhador: %.2f\n\n", premio, primeiro, segundo, terceiro);


    return 0;
}
