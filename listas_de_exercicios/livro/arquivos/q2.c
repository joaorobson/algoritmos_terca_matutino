#include <stdio.h>
#include <string.h>

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

int main(){
    char conteudo[100] = "";

    leArquivo("arquivo_1.txt", conteudo);
    leArquivo("arquivo_2.txt", conteudo);

    printf("conteudo dos dois arquivos: %s\n", conteudo);

    escreveNoArquivo("arquivo_3.txt", conteudo);


    return 0;
}