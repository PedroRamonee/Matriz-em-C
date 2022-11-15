#include <stdio.h>
#include <stdlib.h>

// Pedro Corrêa INFO-1 exercicio 3

int main() {
	
	int i, j;
	int matriz1[3][3];
	int matriz2[3][3];
	
	printf("Entrada de valores para a Matriz 1: \n") ;
	
	for(i=0; i < 3; i++){
		for(j=0; j< 3; j++){
			
			// Solicitação e Leitura básica da Matriz 1
			printf("Element - [%d],[%d] = ",i,j);
			scanf("%d", &matriz1[i][j]);
				
		}
		
	}
	
	printf("Entrada de valores para a Matriz 2: \n") ;
	
	for(i=0; i < 3; i++){
		for(j=0; j< 3; j++){
			
			// Solicitação e Leitura básica da Matriz 2
			printf("Element - [%d],[%d] = ",i,j);
			scanf("%d", &matriz2[i][j]);
				
		}
		
	}
		
	// Impressão básica da matriz 1
	printf("\n Matriz 1 : \n\n");
	
	for(i=0; i < 3; i++){
		
		printf("\n");
			
		for(j=0; j< 3; j++){
			
		
			printf("%d\t", matriz1[i][j]);
		}
		
	}
	
	// Impressão básica da matriz 2
	printf("\n Matriz 2 : \n\n");
	
	for(i=0; i < 3; i++){
		
		printf("\n");
			
		for(j=0; j< 3; j++){
			
		
			printf("%d\t", matriz2[i][j]);
		}
		
	}
	
		// Impressão básica da soma das  matrizes 1 e 2
	printf("\n Soma da matrizes : \n\n");
	
	for(i=0; i < 3; i++){
		
		printf("\n");
			
		for(j=0; j< 3; j++){
			
			// Soma das matrizes
			printf("%d\t", matriz1[i][j] + matriz2[i][j]);
		}
		
	}





	return 0;
		
}
