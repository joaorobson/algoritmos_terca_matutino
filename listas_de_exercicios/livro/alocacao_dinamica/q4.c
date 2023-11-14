#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int* vetor = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}