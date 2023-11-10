#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// string com alocação estática vs dinâmica
int main(){
    // alocação estática de uma string
    char string_estatica[10];

    strcpy(string_estatica, "hello");
    printf("string_estatica: %s\n", string_estatica);

    // alocação dinâmica
    char *string_dinamica;
    string_dinamica = (char*) malloc(10); // alocando 10 espaços para string_dinamica

    strcpy(string_dinamica, "hello 2");
    printf("string_dinamica: %s\n", string_dinamica);

    return 0;
}