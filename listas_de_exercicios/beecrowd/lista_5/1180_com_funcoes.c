#include <stdio.h>

int encontraPosicaoMenorValor(int* vetor, int tamanhoVetor){
    // encontra o menor valor do vetor
    int menorValor = vetor[0];
    int posicaoMenorValor = 0;

    for(int posicao = 1;posicao < tamanhoVetor;posicao++){
        if(vetor[posicao] < menorValor){
            menorValor = vetor[posicao];
            posicaoMenorValor = posicao;
        }
    }
    return posicaoMenorValor;
}

int main(){
    int tamanhoVetor, valor;
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];
    
    // lê os valores do vetor
    for(int posicao = 0;posicao < tamanhoVetor;posicao++){
        scanf("%d", &valor);
        vetor[posicao] = valor;
    }
    
    int posicaoMenorValor = encontraPosicaoMenorValor(vetor, tamanhoVetor);


    printf("Menor valor: %d\n", vetor[posicaoMenorValor]);
    printf("Posicao: %d\n", posicaoMenorValor);


    return 0;
}
