#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    do {
        printf("insira um valor positivo para ser o tamanho do vetor: ");
        scanf("%d", &n);
    } while(n <= 0);
   
    int* vetor = (int*) malloc(n*sizeof(int));

    printf("insira os valores (>= 2) do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        do{
            printf("vetor[%d]: ", i);
            scanf("%d", &vetor[i]);
        } while(vetor[i] < 2);
    }

    for (int i = 0; i < n; i++)
    {
        printf("vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}