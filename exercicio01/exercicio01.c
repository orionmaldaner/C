#include<stdio.h>
#include <string.h>

#define MAX 2

	typedef struct {		//tipo de dado
		char nome[50];
		int telefone;
		int celular;
		char endereco[50];
		char aniversario[20];
	} agenda;
int main() {
/*
	agenda fam[3];
	printf("\n------Caddastro de contato--------\n\n");
	
	printf("Nome contato: ");
	gets(contato.nome, 50, stdin);
	printf("Telefone: ");
	scanf("%d", &contato.telefone);
	printf("Celular: ");
	scanf("%d", &contato.celular);
	printf("Endereco: \n");
	gets(contato.endereco, 50, stdin);
	printf("Aniversario: ");
	gets(contato.aniversario, 20, stdin);
	
	printf("\n\n-----Dados contato-------\n\n");
	printf("Nome...........: %s", contato.nome);
	printf("Telefone.......: %d", contato.telefone);
	printf("Celular........: %d", contato.celular);
	printf("Endereco.......: %s", contato.endereco);
	printf("Aniversario....: %s", contato.aniversario);
*/
int i = 0;
int j;
agenda fam[MAX];
	
	for(i; i < MAX; i++){
		
		printf("\n------Cadastro do contato %d--------\n\n", i+1);
		printf("Nome contato: ");
		gets(fam[i].nome);
		printf("Telefone: ");
		scanf("%d", &fam[i].telefone);
		printf("Celular: ");
		scanf("%d", &fam[i].celular);
		printf("Endereco: \n");
		gets(fam[i].endereco);
		printf("Aniversario: ");
		gets(fam[i].aniversario);
	}

	
	do {
		j = 0;
		i = 0;
		printf("\n\nQuantos contatos deseja visualizar? \n");
		scanf("%d", &j);
		if (j > 0 && j < MAX+1) {
			
			for (i; i < j; i++) {
				printf("\n\n-----Dados contato %d-------\n", i+1);
				printf("Nome...........: %s\n", fam[i].nome);
				printf("Telefone.......: %d\n", fam[i].telefone);
				printf("Celular........: %d\n", fam[i].celular);
				printf("Endereco.......: %s\n", fam[i].endereco);
				printf("Aniversario....: %s\n", fam[i].aniversario);
			}
		} else {
			printf("Valor invalido!");
		}
		
	} while(j > 0 && j < MAX+1);
	
	

/*typedef struct{

int idade;

char nome[50];

} pessoa;

main(){

int i;

pessoa fam[3];

strcpy(fam[0].nome,"pai");

fam[0].idade=40;

strcpy(fam[1].nome,"mae");

fam[1].idade=39;

strcpy(fam[2].nome,"filho");

fam[2].idade=15;

for(i=0;i<3;i++){

	printf("%s\t%d",
	fam[i].nome,
	fam[i].idade);
	}*/
return 0;
}

