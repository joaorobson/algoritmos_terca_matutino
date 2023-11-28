#include <stdio.h>
#include <string.h>
#include <ctype.h>

void leArquivo(char* nomeArquivo, char* conteudo){
    char linha[20];
    FILE *f;

    f = fopen(nomeArquivo, "r");

    if(f == NULL){
        printf("Erro ao abrir o arquivo_1.txt!!!\n");
    }

    while(fgets(linha, 20, f)){
        strcat(conteudo, linha);
    }

    fclose(f);
}

void escreveNoArquivo(char* nomeArquivo, char* conteudo){
    FILE *f;

    f = fopen(nomeArquivo, "w");

    if(f == NULL){
        printf("Erro ao abrir o arquivo_1.txt!!!\n");
    }

    fputs(conteudo, f);

    fclose(f);
}

void transformaParaMaisculas(char* string){
    for(int i = 0;i < strlen(string);i++){
        string[i] = toupper(string[i]);    
    }
}

int main(){
    char conteudo[100] = "";
    char nomeArquivo[50];
    printf("Insira o nome de um arquivo: ");
    scanf("%s", nomeArquivo);
    leArquivo(nomeArquivo, conteudo);

    transformaParaMaisculas(conteudo);    
    escreveNoArquivo("arquivo_upper.txt", conteudo);


    return 0;
}