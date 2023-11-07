#include <stdio.h>

int main(){
    int vetor[5];


    for(int i = 0;i < 5;i++){
        scanf("%d", vetor + i); // vetor + i é a mesma coisa de &vetor[i]
    }

    for(int i = 0;i < 5;i++){
        printf("%d\n", *(vetor + i)*2); // vetor[i] é a mesma coisa que *(vetor + i)
    }


    return 0;
}