#include <stdio.h>
#include <stdlib.h>

// Pedro Corr�a INFO-1 exercicio 5

int main() {
	
	int i, j;
	int matriz[2][2];
	
	printf("Entrada de valores para a Matriz: \n") ;
	
	for(i=0; i < 2; i++){
		for(j=0; j< 2; j++){
			
			// Solicita��o e Leitura b�sica da Matriz
			printf("Indice - [%d],[%d] = ",i,j);
			scanf("%d", &matriz[i][j]);
				
		}
		
	}
	
		// Impress�o da Matriz
	printf("\n Matriz: \n\n");
	
	for(i=0; i < 2; i++){
		
		printf("\n");
			
		for(j=0; j< 2; j++){
			
		
			printf("%d\t", matriz[i][j]);
		}
		
	}
	
		// Impress�o da Matriz dobrada
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
