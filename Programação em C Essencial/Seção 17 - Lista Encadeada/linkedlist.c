#include <stdio.h>
#include <stdlib.h>

struct aluno{
	int id;
	char nome[100];
	float notas[3];
	struct aluno *prox;
};

void Imprime(struct aluno *ini);
void InsereIni(struct aluno *ini);
void InsereFim(struct aluno *ini);
void ApagaIni(struct aluno *ini);
void ApagaFim(struct aluno *ini);
void ApagaId(struct aluno *ini);
void Busca(struct aluno *ini);

int main(){
	int opc;
	struct aluno *ini, *p;
	p = malloc(sizeof(struct aluno));
	p -> prox = NULL;
	ini = p;
	while(opc){
		printf("\t========================");
		printf("\tMenu-Escolha uma opcao: ");
		printf("\t========================\n\n");
		printf(" 1. Imprimir a Lista\n");
		printf(" 2. Inserir na primeira posição\n");
		printf(" 3. Inserir na ultima posição\n");
		printf(" 4. Apagar o primeiro elemento da lista\n");
		printf(" 5. Apagar o ultimo elemento\n");
		printf(" 6. Apagar um elemento com base no seu numero\n");
		printf(" 7. Buscar se um numero existe ou nao na lista\n");
		printf(" 8. Terminar o programa\n\n");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				Imprime(ini);
				break;

			case 2:
				InsereIni(ini);

				break;

			case 3:
				InsereFim(ini);
				break;

			case 4:
				ApagaIni(ini);

				break;

			case 5:
				ApagaFim(ini);

				break;

			case 6:
				ApagaId(ini);
				break;

			case 7:
				Busca(ini);
				break;

			case 8:
				exit(1);
				break;
		}
	}
	system("pause");
	return 0;
}

void Imprime(struct aluno *ini){
	struct aluno *p;
	if((ini->prox) == NULL){
		printf("A lista esta vazia.");
	}else{
		for(p = ini->prox; p != NULL; p = p->prox){
			printf(" Nome: %s\n", p->nome);
			printf(" Id: %d", p->id);
			printf("Notas 1: %f; Nota 2: %f; Nota 3: %f\n\n", p->notas[0], p->notas[1], p->notas[2]);
		}
	}
}

void InsereIni(struct aluno *ini){
	struct aluno *nova;
	nova = malloc(sizeof(struct aluno));
	printf("Digite o nome: ");
	scanf(" %[^\n]s", nova->nome);
	printf("Digite o seu ID: ");
	scanf("%d", &nova->id);
	printf("Digite as 3 notas: ");
	scanf("%f %f %f", &nova->notas[0], &nova->notas[1], &nova->notas[2]);
	nova->prox = ini->prox;
	ini->prox = nova;
}

void InsereFim(struct aluno *ini){
	struct aluno *nova, *temp;
	nova = malloc(sizeof(struct aluno));
	temp = nova;
	printf("Digite o nome: ");
	scanf(" %[^\n]s", nova->nome);
	printf("Digite o seu ID: ");
	scanf("%d", &nova->id);
	printf("Digite as 3 notas: ");
	scanf("%f %f %f", &nova->notas[0], &nova->notas[1], &nova->notas[2]);
	if(ini->prox == NULL){
		nova->prox = NULL;
		ini->prox = nova;
	}else{
		temp = ini->prox;
		while(temp->prox != NULL){
			temp = temp->prox;
		}
		temp->prox = nova;
		nova->prox = NULL;
	}
}

void ApagaIni(struct aluno *ini){
	struct aluno *temp;
	if(ini->prox != NULL){
		temp = ini->prox;
		ini->prox = temp->prox;
		free(temp);
	}
}

void ApagaFim(struct aluno *ini){
	struct aluno *temp, *nova;
	if(ini->prox != NULL){
		temp = ini->prox;
		while(temp->prox != NULL){
			nova = temp;
			temp = temp->prox;
		}
		nova->prox = NULL;
		free(temp);
	}

}
void ApagaId(struct aluno *ini){
	struct aluno *temp, *prev, *next;
	int id;
	printf("Digite o id a ser apagado: ");
	scanf("%d", &id);
	temp = ini->prox;
	if(temp->id == id){
		ApagaIni(ini);
	}else{
		while(temp->id != id){
			temp = temp->prox;
			prev = temp;
			temp = temp->prox;
			next = temp->prox;
		}
		prev->prox = next;
		free(temp);
	}
	
}

void Busca(struct aluno *ini){
	struct aluno *temp;
	temp = ini->prox;
	int id;
	printf("Digite um id para a busca: ");
	scanf("%d", &id);

	if(temp->id == id){
		printf("Id: %s\n", temp->id);
		printf("Nome: %d\n", temp->nome);
		printf("Nota 1: %.2f Nota 2: %.2f Nota 3: %.2f\n\n", temp->notas[0], temp->notas[1], temp->notas[2]);
	}else{
		printf("Nome nao encontrado.\n\n");
		break;
	}
	while(temp->id != id){
		temp = temp->prox;
		if(temp->id == id){
			printf("Id: %d\n", temp->id);
			printf("Nome: %s\n", temp->nome);
			printf("Nota 1: %.2f Nota 2: %.2f Nota 3: %.2f\n\n", temp->notas[0], temp->notas[1], temp->notas[2]);
		}else{
			printf("Nome nao encontrado.\n\n");
			break;
		}
	}
}

