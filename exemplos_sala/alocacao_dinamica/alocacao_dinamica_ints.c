#include <stdio.h>
#include <stdlib.h>

// vetor de inteiros com alocação estática vs dinâmica
int main(){
    // alocação estática de um vetor de ints
    int vetor_estatico[5];

/*     for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor_estatico[i]);
        printf("vetor_estatico[%d] = %d\n", i, vetor_estatico[i]);
    } */

    // alocação dinâmica de um vetor de ints
    int *vetor_dinamico;
    vetor_dinamico = (int*) malloc(5*sizeof(int)); // 5 x tamanho de cada inteiro (4 bytes, geralmente)
    if(vetor_dinamico == NULL){
        printf("Nao ha memoria suficiente!!!\n");
        return 1;
    }
    printf("valores do vetor usando malloc:\n");
    for (int i = 0; i < 5; i++)
    {
        //scanf("%d", &vetor_dinamico[i]);
        printf("vetor_dinamico[%d] = %d\n", i, vetor_dinamico[i]);
    }

    int *vetor_dinamico_2;
    vetor_dinamico_2 = (int*) calloc(5, sizeof(int)); // 5 x tamanho de cada inteiro (4 bytes, geralmente)
    if(vetor_dinamico_2 == NULL){
        printf("Nao ha memoria suficiente!!!\n");
        return 1;
    }
    printf("valores do vetor usando calloc:\n");
    for (int i = 0; i < 5; i++)
    {
        //scanf("%d", &vetor_dinamico[i]);
        printf("vetor_dinamico[%d] = %d\n", i, vetor_dinamico_2[i]);
    }
    return 0;
}