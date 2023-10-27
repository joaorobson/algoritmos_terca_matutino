#include <stdio.h>

int main(){
    // 1ª forma de inicializar o vetor:
    //int vetor[4] = {1, 2, 3, 4};

    // 2ª forma de inicializar o vetor:
    // int vetor[4];
    // vetor[0] = 1;
    // vetor[1] = 2;
    // vetor[2] = 3;
    // vetor[3] = 4;

    // 3ª forma de inicializar o vetor:
    int vetor[4];

    for(int i = 0;i <= 3; i++){
        scanf("%d", &vetor[i]);
    }




    // Evitar as seguintes coisas:
    // printf("Valor da posicao -1: %d\n", vetor[-1]); -> acessar posições negativas
    // printf("Valor da posicao 4: %d\n", vetor[4]); -> acessar posições além do tamanho do meu vetor
    
    printf("Valor da posicao 0: %d\n", vetor[0]);
    printf("Valor da posicao 1: %d\n", vetor[1]);
    printf("Valor da posicao 2: %d\n", vetor[2]);
    printf("Valor da posicao 3: %d\n", vetor[3]);



    return 0;
} 