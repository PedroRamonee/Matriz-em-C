#include <stdio.h>
#include <stdlib.h>
// Pedro Corrêa INFO-1 exercicio 6

int main() {
	
	int i, j, num, k = 0, l = 0;
	int matriz1[100][100];
	
	// Solicitação e leitura do tamanho da Matriz
	printf("Digite o  tamanho da matriz desejada (1x1, 2x2, 3x3): ");
	scanf("%d", &num);
	
	printf("Entrada de valores para a Matriz : \n") ;
	
	for(i=0; i < num; i++){
		for(j=0; j< num; j++){
			
			// Solicitação e Leitura básica da Matriz 1
			printf("Element - [%d],[%d] = ",i,j);
			scanf("%d", &matriz1[i][j]);
				
		}
		
	}
		// Impressão da Matriz
	printf("\n Matriz 1 : \n\n");
	
	for(i=0; i < num; i++){
		
		printf("\n");
			
		for(j=0; j< num; j++){
			
		
			printf("%d\t", matriz1[i][j]);
			
			/* Teste para saber a posição da matriz, caso i == j, é a posição da diagonal*/
			if ( i == j){
				// testa pra ver se a posição da diagonal é igual a 1
				if ( matriz1[i][j] == 1 ){
					// caso seja igual a 1 adiciona 1 a variavel K
					k++;
				}
				
			}
			/* Teste para saber a posição da matriz, caso i != j, não é a posição da diagonal*/
			if ( i != j){
				// testa pra ver se a posição é igual a 0
				if ( matriz1[i][j] == 0){
					// caso seja 0 adiciona 1 a L
					l++;
					
				}
			}
		}
		
	}
	
	// Se K for igual ao numero de linha e L for igual a o numero de linha vezes o numero de linhas menos 1, a matriz é indentidade
	if( k == num && l == (num * (num - 1))){
		
		printf(" \n  \n Matriz indentidade");
	}
	// caso não seja a matriz não é identidade
	else {
		
		printf(" \n \n Nao e matriz indentidade");
	}
	


	return 0;
		
}
