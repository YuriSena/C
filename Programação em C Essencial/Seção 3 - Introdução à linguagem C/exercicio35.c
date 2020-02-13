#include<stdio.h>
#include<math.h>

int main(){
    int a=0, b=0, hipo=0;
    printf("Informe os catetos: ");
    scanf("%d %d", &a, &b);
    hipo = sqrt(pow(a,2)+ pow(b,2));
    printf("Catetos: a:%d b:%d \nHipotenusa: %d", a, b, hipo);

    return 0;
}
