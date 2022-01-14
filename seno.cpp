#include <stdio.h>
#include <clocale>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    double graus, radianos, seno, parcelaX, denominador, numerador;
    int parcelas, i, fator, potencia, o;
    int base = 3; 
    int negativar = 1;
    
    do {
    	printf("Quantos graus tem o angulo? ");
    	scanf("%lf", &graus);
    	if (graus <= 0) {  
    		system("cls");
    		printf("O valor selecionado é inválido, por favor inserir um novo valor \n");
		}
	} while (graus <= 0);
    
    radianos = (graus * 3.14159265358979323846)/180;
    
    printf("Isso dá um total de %lf radianos \n", radianos);
    
    do {
    	printf("Quantas parcelas terá a série? ");
    	scanf("%i", &parcelas);
    	if (parcelas < 1) {  
    		system("cls");
    		printf("Essa quantidade de parcelas não é válida \n");
		}
	} while (parcelas < 1);
    
    seno = radianos;
	    for (i = 1; i < parcelas; i++) {
	    	fator = base; 
	    	
	    	for(denominador = 1; fator > 1; fator = fator - 1) {
				denominador = denominador * fator;
	   		};
	   		//printf("Fator: %i \n", fator); 
	   		//printf("Denominador: %lf \n", denominador); 
	   		
	   		potencia = base;
	   		numerador = 1;
	   		for (o = 0; o < potencia; o++) {
	   			numerador = numerador * radianos;
			};
			//printf("potencia: %i \n", potencia); 
	   		//printf("Numerador: %lf \n", numerador); // Está errado batendo com 1 número a mais
	   		
	    	parcelaX = numerador/denominador; 
			
			switch (negativar) {
				case 0:
					negativar = 1;
	    		break;
	    		case 1:
	    			parcelaX *= -1;
	    			negativar = 0;
	    		break;
			};
	    	
	    	seno += parcelaX;
	    	base = base + 2;
	    	//printf("Parcela: %lf \n", parcelaX); do
	    	//printf("Seno atualmente: %lf \n  \n", seno);
		};
			
		printf("O seno do angulo de %lf graus equivale a %.8f quando calculada em %i parcelas na série de Taylor \n ", graus, seno, parcelas);
	
	return 0;
}
