#include <stdio.h>

int main(){
    float vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    for(int i = 0;i < 10;i++){
        //printf("valor de vetor[%d] = %f\n", i, vetor[i]);
        printf("endereco de vetor[%d] = %p\n", i, &vetor[i]);
        printf("endereco de vetor[%d] = %p\n", i, vetor + i);

    }

    return 0;
}