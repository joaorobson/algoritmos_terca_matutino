#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor_dinamico;
    vetor_dinamico = (int*) malloc(400000000*sizeof(int)); // 5 x tamanho de cada inteiro (4 bytes, geralmente)
    if(vetor_dinamico == NULL){
        printf("Nao ha memoria suficiente!!!\n");
        return 1;
    }
    int a;
    do{
        scanf("%d", &a);
    } while(a != 0);
    
    free(vetor_dinamico);
    return 0;
}