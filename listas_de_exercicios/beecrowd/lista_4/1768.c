#include <stdio.h>

int main(){

    int tamanhoArvore;

    while(scanf("%d", &tamanhoArvore) == 1){
        int meioArvore = tamanhoArvore/2;
        int numLinhas = meioArvore + 1;
        int numAstericos = 1;
        int numEspacos = meioArvore;

        // percorre linha por linha da parte com "folhas" da árvore
        for(int linhaArvore = 0;linhaArvore < numLinhas;linhaArvore++){
            // imprime espaços de cada linha
            for(int espacosImpressos = 0;espacosImpressos < numEspacos;espacosImpressos++){
                printf(" ");
            }
            // imprime os asteriscos de cada linha
            for(int asteriscosImpressos = 0;asteriscosImpressos < numAstericos;asteriscosImpressos++){
                printf("*");
            }
            printf("\n");
            numAstericos = numAstericos + 2;
            numEspacos--;
        }

        // linha de cima da base ("tronco da árvore")
        for(int i = 0;i < meioArvore;i++){
            printf(" ");
        }
        printf("*\n");

        // linha de baixo da base
        for(int i = 0;i < meioArvore - 1;i++){
            printf(" ");
        }
        printf("***\n\n");
    }
    return 0;
}