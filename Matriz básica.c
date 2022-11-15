#include <stdio.h>
#include <stdlib.h>

// Pedro Corrêa INFO-1 exercicio 1

int main() {
	
	/* A váriavel matriz no exemplo era float, e dava errado por conta disso,
	logo para resolver o problema mudamos o tipo da variável de float para int*/
	int i, j;
	int matriz[2][2];
	
	for(i=0; i < 2; i++){
		for(j=0; j< 2; j++){
			
			printf("Digite o valor para matriz[%d][%d] = ",i,j);
			scanf("%d", &matriz[i][j]);
			
		}
		
	}
	
	for(i=0; i < 2; i++){
		for(j=0; j< 2; j++){
			
			printf("%d ", matriz[i][j]);
		}
		
	}
	
	return 0;
}
