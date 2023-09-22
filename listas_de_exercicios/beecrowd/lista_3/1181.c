#include <stdio.h>

int main(){
    int linhaOperacao;
    char operacao;
    double matriz[12][12], soma = 0;

    scanf("%d", &linhaOperacao);
    scanf(" %c", &operacao);

    for(int linha = 0;linha < 12;linha++){ // para cada linha da matriz
        for(int coluna = 0;coluna < 12;coluna++){ // para cada coluna dessa linha
            scanf("%lf", &matriz[linha][coluna]); // leia um double e salve
        }
    }

    for(int coluna = 0;coluna < 12;coluna++){
        soma = soma + matriz[linhaOperacao][coluna];
    }

    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    } else if(operacao == 'M'){
        printf("%.1lf\n", soma/12);
    }

    return 0;
}