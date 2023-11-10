#include <stdio.h>
#include <stdlib.h>

int main(){
    // alocação dinâmica de um vetor de ints
    int *vetor_dinamico;
    vetor_dinamico = (int*) malloc(5*sizeof(int)); // 5 x tamanho de cada inteiro (4 bytes, geralmente)
    if(vetor_dinamico == NULL){
        printf("Nao ha memoria suficiente!!!\n");
        return 1;
    }
    printf("lendo valores do vetor da posicao 0 a 4...\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor_dinamico[i]);
    }

    vetor_dinamico = realloc(vetor_dinamico, 10*sizeof(int)); // aumento vetor para 10 posições
    if(vetor_dinamico == NULL){
        printf("Nao ha memoria suficiente!!!\n");
        return 1;
    }

    printf("lendo valores do vetor da posicao 5 a 9...\n");
    for (int i = 5; i < 10; i++)
    {
        scanf("%d", &vetor_dinamico[i]);
    }
    
    printf("valores salvos no vetor:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("vetor_dinamico[%d] = %d\n", i, vetor_dinamico[i]);
    }
    
    return 0;
}