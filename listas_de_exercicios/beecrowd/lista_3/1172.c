#include <stdio.h>

int main(){
    int valor, vetor[10];

    for(int posicao = 0;posicao < 10;posicao++){
        scanf("%d", &valor);
        if(valor > 0){ // se valor for 0 ou negativo, salva 1 na posição atual
            vetor[posicao] = valor;
        } else {
            vetor[posicao] = 1;
        }
    }

    for(int posicao = 0;posicao < 10;posicao++){
        printf("X[%d] = %d\n", posicao, vetor[posicao]);
    }

    return 0;
}