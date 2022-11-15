#include <stdio.h>
#include <stdlib.h>

// Pedro Corrêa INFO-1 exercicio 5

int main() {
	
	int i, j;
	int matriz[2][2];
	
	printf("Entrada de valores para a Matriz: \n") ;
	
	for(i=0; i < 2; i++){
		for(j=0; j< 2; j++){
			
			// Solicitação e Leitura básica da Matriz
			printf("Indice - [%d],[%d] = ",i,j);
			scanf("%d", &matriz[i][j]);
				
		}
		
	}
	
		// Impressão da Matriz
	printf("\n Matriz: \n\n");
	
	for(i=0; i < 2; i++){
		
		printf("\n");
			
		for(j=0; j< 2; j++){
			
		
			printf("%d\t", matriz[i][j]);
		}
		
	}
	
		// Impressão da Matriz dobrada
	printf("\n Matriz dobrada: \n");

		for(i=0; i < 2; i++){
		
		printf("\n");
			
		for(j=0; j< 2; j++){
			
			// Calcule do dobro da matriz
			printf("%d\t", matriz[i][j] * 2);
		}
		
	}
	


	return 0;
		
}
