#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro {
    char nome[20];
    int idade;
    char endereco[40];
} Cadastro;


Cadastro* criaListaDeCadastros(int n){
    // Se fosse alocação estática: Cadastro cadastros[n];
    Cadastro* cadastros = (Cadastro*) malloc(n*sizeof(Cadastro));
    printf("insira cadastros:\n");
    for (int i = 0; i < n; i++)
    {
        printf("nome: ");
        scanf("%s", cadastros[i].nome);
        printf("idade: ");
        scanf("%d", &cadastros[i].idade);
        printf("endereco: ");
        scanf("%s", cadastros[i].endereco);
    }
    return cadastros;
}

int main(){
    int n;
    scanf("%d", &n);
    Cadastro* cadastros = criaListaDeCadastros(n);
    printf("lista de cadastros:\n");
    for (int i = 0; i < n; i++)
    {
        printf("nome: %s\n", cadastros[i].nome);
        printf("idade: %d\n", cadastros[i].idade);
        printf("endereco: %s\n", cadastros[i].endereco);
    }



    return 0;
}