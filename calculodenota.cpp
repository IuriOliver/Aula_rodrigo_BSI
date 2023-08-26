#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define N 2

int main(void) {
//Reconhecimento de caractér	
setlocale(LC_ALL, "");

//Variáveis
bool execucao;
float n1, n2 , m;	
	
//Loop executado pelo usuário
	do{
		//Entrada
		printf("Digite nota 1: ");
		scanf("%f", &n1);
		system("cls");
	
	
		printf("Digite nota 2: ");
		scanf("%f", &n2);
		system("cls");	
		
		//Processamento
		m = (n1 + n2) / N;
	
		//Saída
		printf("Média: %.2f", m);
		printf("\n\nMédia: %d", (int) m);
		printf("\n\n");
		system("pause");
		system("cls");
		
		printf("Deseja executar novamente?\n");
		printf("0 - para sair.\n");
		printf("1 - para continuar.\n\n");
		printf("Informe a opção: "); 
		scanf("%d", &execucao);
		
		system("cls");
	
	}while(execucao != false); //Condição de encerramento do laço
	
	printf("Programa encerrado. \n\n");

	return 0;
}
