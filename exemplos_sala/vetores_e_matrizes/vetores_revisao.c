#include <stdio.h>


int main(){

    // primeira forma
    // só funciona se for na declaração
    // int vetor[5] = {1, 2, 3, 4, 5};
    // -----------------------------

    // segunda forma
    // int vetor[5];
    // vetor[0] = 1;
    // vetor[1] = 2;
    // vetor[2] = 3;
    // vetor[3] = 4;
    // vetor[4] = 5;

    // terceira forma
    int vetor[5];
    for(int i = 0;i < 5;i++){
        vetor[i] = i + 1;
    }

    for(int i = 0;i < 5;i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // fibonacci com vetor
    // 0 1 1 2 3 5 8 13 21

    int fibo[20];
    fibo[0] = 0;
    fibo[1] = 1;
    // fibo[2] = fibo[1] + fibo[0];
    // fibo[3] = fibo[2] + fibo[1];
    for(int i = 2;i < 20;i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    for(int i = 0;i < 20;i++){
        printf("%d ", fibo[i]);
    }
    return 0;
}