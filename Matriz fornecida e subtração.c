#include <stdio.h>
#include <stdlib.h>
// Pedro Corr�a INFO-1 exercicio 4

int main() {
	
	int i, j, num;
	int matriz1[100][100];
	int matriz2[100][100];
	
	// Solicita��o e leitura do tamanho da matriz
	printf("Digite o  tamanho da matriz desejada (1x1, 2x2, 3x3): ");
	scanf("%d", &num);
	
	printf("Entrada de valores para a Matriz 1: \n") ;
	
	for(i=0; i < num; i++){
		for(j=0; j< num; j++){
			
			// Solicita��o e Leitura b�sica da Matriz 1
			printf("Element - [%d],[%d] = ",i,j);
			scanf("%d", &matriz1[i][j]);
				
		}
		
	}
	
	printf("Entrada de valores para a Matriz 2: \n") ;
	
	for(i=0; i < num; i++){
		for(j=0; j< num; j++){
			
			// Solicita��o e Leitura b�sica da Matriz 2
			printf("Element - [%d],[%d] = ",i,j);
			scanf("%d", &matriz2[i][j]);
				
		}
		
	}
		
	// Impress�o b�sica da matriz 1
	printf("\n Matriz 1 : \n\n");
	
	for(i=0; i < num; i++){
		
		printf("\n");
			
		for(j=0; j< num; j++){
			
		
			printf("%d\t", matriz1[i][j]);
		}
		
	}
	// Impress�o b�sica da matriz 2
	printf("\n Matriz 2 : \n\n");
	
	for(i=0; i < num; i++){
		
		printf("\n");
			
		for(j=0; j< num; j++){
			
		
			printf("%d\t", matriz2[i][j]);
		}
		
	}
	
	// Impress�o da Subtra��o das matrizes
	printf("\n Subtra��o da matrizes : \n\n");
	
	for(i=0; i < num; i++){
		
		printf("\n");
			
		for(j=0; j< num; j++){
			
		// Subtra��o das matrizes
			printf("%d\t", matriz1[i][j] - matriz2[i][j]);
		}
		
	}





	return 0;
		
}
