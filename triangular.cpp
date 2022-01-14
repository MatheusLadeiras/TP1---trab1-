#include <stdio.h>
#include <clocale>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    long long x1, x2, x3, numero;
    char tipo;
    int i, quantidade;
    
    do {
    	printf("Quantos números triangulares devem ser imprimidos? ");
    	scanf("%i", &quantidade); 
    	if (quantidade <= 0) {  
    		system("cls");
    		printf("O valor selecionado é inválido, por favor inserir um novo valor \n");
		}
	} while (quantidade <= 0);
	
	do {
    	printf("Qual o tipo desejado de números triangulares? (Responda P para par ou I para ímpar) ");
    	scanf(" %c", &tipo); 
    	if (tipo == 'P' || tipo == 'I') {
    		//printf("P ou I \n");
		} else {
    		printf("Os tipos podem ser apenas 'P' para par ou 'I' para ímpar \n");
		}
	} while (tipo != 'P'&& tipo != 'I' );
	
	system("cls");
	printf("A sequência consiste em: \n");
	
	if (tipo == 'P') {
		//printf("P \n");
		x1 = 2;
		x2 = 4;
		x3 = 6;
	} else {
		//printf("I \n");
		x1 = 1;
		x2 = 3;
		x3 = 5;
	} 
	
	for(i = 0; i < quantidade; i++) {
		numero = x1*x2*x3;
		printf("%i \n", numero);
		x1 += 2;
		x2 += 2;
		x3 += 2;		
	} 
	
    return 0;
}
