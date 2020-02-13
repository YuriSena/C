#include <stdio.h>
#include <stdlib.h>

struct num{
    int valor;
    struct num *prox;

};

void printList(struct num *ini);
void insereIni(struct num *ini);
void insereFim(struct num *ini);
void apagaIni(struct num *ini);
void apagaFim(struct num *ini);
void apagaNum(struct num *ini);
void busca(struct num *ini);


int main(){
    struct num *ini, *p;
    int opc;
    ini = malloc(sizeof(struct num));
    ini->prox = NULL;
    p = ini;
    while(opc != 8){
        printf("=============== Escolha uma opcao ==================\n\n");
        printf("1. Imprimir a lista\n");
        printf("2. Inserir no inicio\n");
        printf("3. Inserir no fim\n");
        printf("4. Apagar o primeiro\n");
        printf("5. Apagar o ultimo\n");
        printf("6. Apagar com base no numero\n");
        printf("7. Buscar um elemento\n");
        printf("8. Terminar o programa\n\n");
        printf("Opcao: ");
        scanf("%d", &opc);
        printf("\n\n");
        switch(opc){
            case 1:
                printList(ini);
                break;

            case 2:
                insereIni(ini);
                break;

            case 3:
                insereFim(ini);
                break;

            case 4:
                apagaIni(ini);
                break;

            case 5:
                apagaFim(ini);
                break;

            case 6:
                apagaNum(ini);
                break;

            case 7:
                busca(ini);
                break;

            case 8:
                exit(1);
                break;
        }
    }
    return 0;   // main int tem que retornar int
}

void printList(struct num *ini){
    struct num *p;
    if(ini->prox == NULL){
        printf("A lista esta vazia!\n\n");
    }else{
        printf("================ LISTA ===============\n\n");
        for(p=ini->prox; p != NULL; p = p->prox){
            printf("-|%d|-", p->valor);
        }
        printf("\n\n");
    }
}

void insereIni(struct num *ini){
    struct num *nova, *temp;
    nova = malloc(sizeof(struct num));
    printf("Digite um numero: ");
    scanf("%d", &nova->valor);
    nova->prox = ini->prox;
    ini->prox = nova;
    printf("\n\n");

}

void insereFim(struct num *ini){
    struct num *nova, *temp;
    temp = ini; // faltava temp apontar pra ini
    nova = malloc(sizeof(struct num));
    printf("Digite um numero: ");
    scanf("%d", &nova->valor);
    if(ini->prox == NULL){
        // não tava adicionando no fim quando a lista estava vazia
        temp->prox = nova;
        nova->prox = NULL;
        printf("\n\n");
    }else{
        temp->prox = ini->prox;
        while(temp->prox != NULL){
            temp = temp->prox;
        }
        temp->prox = nova;
        nova->prox = NULL;
        printf("\n\n");

    }

}
void apagaIni(struct num *ini){
    struct num *temp, *p;
    if(ini->prox != NULL){ // ini->valor
        temp = ini->prox;
        ini->prox = temp->prox;
        free(temp);
        printf("Elemento apagado com sucesso!\n\n");
    }else{
        printf("LISTA VAZIA!\n\n");
    }

}
void apagaFim(struct num *ini){
    struct num *temp, *p;
    if(ini->prox != NULL){
        temp = ini->prox;
        while(temp->prox != NULL){
            p = temp;   // p tem que apontar pra temp
            temp = temp -> prox;
        }
        ini->prox = NULL;
        free(temp);
        printf("Elemento apagado com sucesso!\n\n");
    }else{
        printf("LISTA VAZIA!\n\n");
    }


}
void apagaNum(struct num *ini){
    struct num *temp, *p, *p2; // p é o anterior, temp é o do teste, p2 é o proximo | EX: 1, 2, 3 {p -> 1, temp -> 2, p2 -> 3}
    int x;
    printf("Digite o numero a ser apagado: ");
    scanf("%d", &x);
    if(ini->prox != NULL){
        p = ini;
        temp = ini->prox;
        p2 = temp->prox;
        while(temp->prox != NULL){  // aqui remove o tempo e re-liga p a p2
            if(x == temp->valor){
                free(temp);
                printf("Numero Removido com sucesso!\n\n");
                p->prox = p2;
                return;
            } else{
                p = temp;
                temp = temp->prox;
                p2 = temp->prox;
            }
        }
        printf("Numero nao encontrado!\n\n");
    }else{
        printf("LISTA VAZIA!\n\n");
    }


}
void busca(struct num *ini){ // só coloquei um return e tirei a mensagem do else
    struct num *temp;
    int x;
    printf("Digite um numero para buscar: ");
    scanf("%d", &x);
    if(ini->prox != NULL){
        temp = ini->prox;
        do{ // precisa ser do while, se buscasse em lista de 1 elemento ele não entrava
            if(x == temp->valor){
                printf("Valor encontrado!: %d\n\n", temp->valor);
                return;
            }
            temp = temp->prox; // percorre a lista (não tinha)
        }while(temp->prox != NULL);
        printf("Valor nao encontrado!\n\n");
    }else{
        printf("LISTA VAZIA!\n\n");
    }

}
