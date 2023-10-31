#include <stdio.h>

int main(){
    int v[3] = {1,2,3};
    // v é um ponteiro

    // v aponta para o endereço de memória do primeiro valor do vetor
    printf("endereco de memoria apontado por v: %p\n", v);
    printf("valor apontado por v (primeiro valor do vetor): %d\n", *v);
    printf("endereco de memoria do segundo valor de v: %p\n", v + 1);
    printf("segundo valor de v: %d\n", *(v + 1)); // v[1]
    printf("terceiro valor de v: %d\n", *(v + 2)); // v[2]

    return 0;
}