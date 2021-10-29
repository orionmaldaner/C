/*Sua empresa o contratou para desenvolver uma agenda
para uma pessoa solitária que tem apenas o telefone da
mãe e um amigo.

Esta agenda deve ter capacidade para armazenar o
nome, telefone, celular, endereço e aniversário.

A agenda deve ser capaz de inserir os dados de todos os
contatos (máx 3: A mãe, o amigo e ele mesmo)

Após a inserção de todos os contatos deve perguntar ao
usuário o número do contato que ele quer visualizar,
caso o número esteja fora do intervalo (1 a 3), o
programa termina, caso contrário o programa escreve
na tela os dados e pergunta novamente.

Este programa nao precisa ter funções além da principal*/
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
	
return 0;
}

