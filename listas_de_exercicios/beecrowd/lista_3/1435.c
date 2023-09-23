#include <stdio.h>
#include <math.h>

int main() {
	while(1){
		int entrada;
		scanf("%d",&entrada);
		int num = 1;
		int bordaDireita = 0, bordaEsquerda = entrada - 1;
		if(entrada == 0){
				break;
		}
		else{
			int b[entrada][entrada];
			int maiorValorNaMatriz = (int)ceil(entrada/2.0);
			while(maiorValorNaMatriz > 0){
					// para cada valor distinto a ser inserido na matriz
					// comece pela borda externa preenchendo com 1
					// e vá  preenchendo cada borda interna
					// pelas posições opostas
					// Ex.: 0 1, 1 0, 4 1, 1 4
					for(int i = bordaDireita ;i < entrada - bordaDireita;i++){
							b[bordaDireita][i] = num;
							b[i][bordaDireita] = num;
							b[bordaEsquerda-bordaDireita][i] = num;
							b[i][bordaEsquerda-bordaDireita] = num;
					}
					bordaDireita++;
					maiorValorNaMatriz--;
					num++; // vai de 1 a maiorValorNaMatriz
			}
			for(int linha = 0;linha < entrada;linha++){
					for(int coluna = 0;coluna < entrada;coluna++){
						printf("%3d", b[linha][coluna]);
						if(coluna < entrada - 1){
							printf(" ");
						}
					}
					printf("\n");
			}
			printf("\n");
			}
	}
	return 0;
}
