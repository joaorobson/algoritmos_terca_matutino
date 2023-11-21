#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("teste.txt", "w");
    int idade = 25;
    char nome[20] = "joao";

    if(f == NULL){
        printf("erro ao abrir arquivo!!!\n");
        return 1;
    }

    fprintf(f, "nome: %s\n", nome);
    fprintf(f, "idade: %d\n", idade);
    fclose(f);

    return 0;
}