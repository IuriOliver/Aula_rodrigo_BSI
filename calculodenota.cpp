#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define N 2

int main(void) {
//Reconhecimento de caract�r	
setlocale(LC_ALL, "");

//Vari�veis
bool execucao;
float n1, n2 , m;	
	
//Loop executado pelo usu�rio
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
	
		//Sa�da
		printf("M�dia: %.2f", m);
		printf("\n\nM�dia: %d", (int) m);
		printf("\n\n");
		system("pause");
		system("cls");
		
		printf("Deseja executar novamente?\n");
		printf("0 - para sair.\n");
		printf("1 - para continuar.\n\n");
		printf("Informe a op��o: "); 
		scanf("%d", &execucao);
		
		system("cls");
	
	}while(execucao != false); //Condi��o de encerramento do la�o
	
	printf("Programa encerrado. \n\n");

	return 0;
}
