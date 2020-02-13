#include <stdio.h>


int fibo(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int i, termo;

    printf("Digite o termo da serie fibonacci: ");
    scanf("%d", &termo);
    for(i=0; i<termo; i++){
        printf("%d ", fibo(i));
    }

    return 0;
}
