#include <stdio.h>

int main(){
    int tamanhoVetor, valor;
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];
    
    // lê os valores e salva em cada posição do vetor
    for(int posicao = 0;posicao < tamanhoVetor;posicao++){
        scanf("%d", &valor);
        vetor[posicao] = valor;
    }

    // encontra o menor valor
    int menorValor = vetor[0];
    int posicaoMenorValor = 0;
    for(int posicao = 1;posicao < tamanhoVetor;posicao++){
        if(vetor[posicao] < menorValor){
            menorValor = vetor[posicao];
            posicaoMenorValor = posicao;
        }
    }

    printf("Menor valor: %d\n", menorValor);
    printf("Posicao: %d\n", posicaoMenorValor);


    return 0;
}