#include <stdio.h>
#include <stdlib.h>

// Pedro Corr�a INFO-1 exercicio 2

int main() {
	
	int i, j;
	int matriz[3][3];
	
	printf("Entrada de valores para a Matriz: \n") ;
	
	for(i=0; i < 3; i++){
		for(j=0; j< 3; j++){
			
			// Solicita��o e Leitura b�sica da Matriz
			printf("Indice - [%d],[%d] = ",i,j);
			scanf("%d", &matriz[i][j]);
				
		}
		
	}
	
	printf("\n Matriz: \n\n");
	
	for(i=0; i < 3; i++){
		
		// A cada vez que a linha muda ele pula uma linha na exibi��o
		printf("\n");
			
		for(j=0; j< 3; j++){
			
			// A cada vez que a coluna muda ele da um tab na exibi��o
			printf("%d\t", matriz[i][j]);
		}
		
	}





	return 0;
		
}
