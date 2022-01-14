#include <stdio.h>
#include <clocale>
#include <stdlib.h> 

int main() {
    setlocale(LC_ALL, "Portuguese");
    int enquetes, dia, i, combinacao, maior, multiDias;
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, med1 = 0, med2 = 0, med3 = 0;
    char medico, NomeMedico;
    int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0, B1 = 0, B2 = 0, B3 = 0, B4 = 0, B5 = 0, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;

    do {
    	printf("Quantas enquetes serão submetidas? ");
    	scanf("%i", &enquetes); 
    	if (enquetes <= 0) {  
    		system("cls");
    		printf("O valor selecionado é inválido, por favor inserir um novo valor \n");
		}
	} while (enquetes <= 0);
	
	for(i = 0; i < enquetes; i++) {
		
		combinacao = 0;
		
	    do {
	    	printf("Qual o médico que você consulta com mais frequência? ");
	    	scanf(" %c", &medico); 
	    	if (medico == 'A' || medico == 'B' || medico == 'C') {
	    		//printf("ABC \n");
			} else {
	    		printf("Os Médicos presentes são referenciados por 'A', 'B' e 'C' reespectivamente. \n");
			}
			switch(medico) {
	    		case 'A': med1++;
	    		combinacao = combinacao + 1;
	    		break;
	    		case 'B': med2++;
	    		combinacao = combinacao + 2;
	    		break;
	    		case 'C': med3++;
	    		combinacao = combinacao + 3;
	    		break;
			}
		} while (medico != 'A' && medico != 'B' && medico != 'C' );
		
		do {
	    	printf("Qual o dia da semana que você mais marca consultas? (de 1 até 5, segunda até sexta) ");
	    	scanf("%i", &dia);
			if (0 < dia && dia < 6) { 
			} else {
				printf("Os valores que representam dias vão de 1 até 5! \n");
			}
	    	switch(dia) {
	    		case 1: d1++;
	    		combinacao = combinacao + 4;
	    		break;
	    		case 2: d2++;
	    		combinacao = combinacao + 8;
	    		break;
	    		case 3: d3++;
	    		combinacao = combinacao + 12;
	    		break;
	    		case 4: d4++;
	    		combinacao = combinacao + 16;
	    		break;
	    		case 5: d5++;
	    		combinacao = combinacao + 20;
	    		break;
			}
		} while (dia > 5 || dia < 1 );
		
		switch (combinacao) {
			case 5: A1++;
			break;
			case 9: A2++;
			break;
			case 13: A3++;
			break;
			case 17: A4++;
			break;
			case 21: A5++;
			break;
			case 6: B1++;
			break;
			case 10: B2++;
			break;
			case 14: B3++;
			break;
			case 18: B4++;
			break;
			case 22: B5++;
			break;
			case 7: C1++;
			break;
			case 11: C2++;
			break;
			case 15: C3++;
			break;
			case 19: C4++;
			break;
			case 23: C5++;
			break;
		}
	
		/*
		printf("%i \n", d1);
		printf("%i \n", d2);
		printf("%i \n", d3);
		printf("%i \n", d4);
		printf("%i \n", d5);
		printf("dia: %i \n", dia);
		printf("%i \n", med1);
		printf("%i \n", med2);
		printf("%i \n", med3); */
		printf("==================================================================================================\n");
		};
		
		maior = med1;
		NomeMedico = 'A';
		medico = 0;
			    
		if (maior == med2) {
	    	medico++;
		} else if (med2 > maior){ 
       		maior = med2;
       		NomeMedico = 'B';
	    } 
		
		if (maior == med3) {
	    	medico = medico + 2;
		} else if (med3 > maior){
	    	NomeMedico = 'C';
	    	if (medico = 1) {
	    		medico -= 1;
			}
		} 

		switch(medico) {  
			case 0:
				printf("O médico mais requisitado é o médico %c. \n", NomeMedico);
			break;
			case 1:
				printf("Os médicos 'A' e 'B' são igualmente requisitados\n");
			break;
			case 2:
				printf("Os médicos '%c' e 'C' são igualmente requisitados\n", NomeMedico);
			break;
			case 3:
				printf("Os médicos 'A', 'B' e 'C' são igualmente requisitados \n");
			break;
		}
		
		maior = d1;
		dia = 1;
		if (maior < d2) {
			maior = d2;
			dia = 2;
		}
		if (maior < d3) {
			maior = d3;
			dia = 3;
		}
		if (maior < d4) {
			maior = d4;
			dia = 4;
		}
		if (maior < d5) {
			maior = d5;
			dia = 5;
		}
		
		// printf("maior: %i", maior);
		
		switch (dia) {
			case 1: printf("O dia mais popular é segunda.\n");
			break;
			case 2: printf("O dia mais popular é terça.\n");
			break;
			case 3: printf("O dia mais popular é quarta.\n");
			break;
			case 4: printf("O dia mais popular é quinta.\n");
			break;
			case 5: printf("O dia mais popular é sexta.\n");
			break;
		}
		
		maior = A1;
		combinacao = 1;
		if (maior < A2) {
			maior = A2;
			combinacao = 2;
		}
		if (maior < A3) {
			maior = A3;
			combinacao = 3;
		}
		if (maior < A4) {
			maior = A4;
			combinacao = 4;
		}
		if (maior < A5) {
			maior = A5;
			combinacao = 5;
		}
		if (maior < B1) {
			maior = B1;
			combinacao = 6;
		}
		if (maior < B2) {
			maior = B2;
			combinacao = 7;
		}
		if (maior < B3) {
			maior = B3;
			combinacao = 8;
		}
		if (maior < B4) {
			maior = B4;
			combinacao = 9;
		}
		if (maior < B5) {
			maior = B5;
			combinacao = 10;
		}
		if (maior < C1) {
			maior = C1;
			combinacao = 11;
		}
		if (maior < C2) {
			maior = C2;
			combinacao = 12;
		}
		if (maior < C3) {
			maior = C3;
			combinacao = 13;
		}
		if (maior < C4) {
			maior = C4;
			combinacao = 14;
		}
		if (maior < C5) {
			combinacao = 15;
		}
		
		switch (combinacao) {
			case 1: printf("A combinação mais frequentada é médico A na segunda-feira");
			break;
			case 2: printf("A combinação mais frequentada é médico A na terça-feira");
			break;
			case 3: printf("A combinação mais frequentada é médico A na quarta-feira");
			break;
			case 4: printf("A combinação mais frequentada é médico A na quinta-feira");
			break;
			case 5: printf("A combinação mais frequentada é médico A na sexta-feira");
			break;
			case 6: printf("A combinação mais frequentada é médico B na segunda-feira");
			break;
			case 7: printf("A combinação mais frequentada é médico B na terça-feira");
			break;
			case 8: printf("A combinação mais frequentada é médico B na quarta-feira");
			break;
			case 9: printf("A combinação mais frequentada é médico B na quinta-feira");
			break;
			case 10: printf("A combinação mais frequentada é médico B na sexta-feira");
			break;
			case 11: printf("A combinação mais frequentada é médico C na segunda-feira");
			break;
			case 12: printf("A combinação mais frequentada é médico C na terça-feira");
			break;
			case 13: printf("A combinação mais frequentada é médico C na quarta-feira");
			break;
			case 14: printf("A combinação mais frequentada é médico C na quinta-feira");
			break;
			case 15: printf("A combinação mais frequentada é médico C na sexta-feira");
			break;
		}
		
    return 0;
}



