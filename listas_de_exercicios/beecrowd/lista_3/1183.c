#include <stdio.h>

int main(){
    int colunaInicial = 1;
    char operacao;
    double matriz[12][12], soma = 0;
    scanf("%c", &operacao);

    for(int linha = 0;linha < 12;linha++){ // para cada linha da matriz
        for(int coluna = 0;coluna < 12;coluna++){ // para cada coluna dessa linha
            scanf("%lf", &matriz[linha][coluna]); // leia um double e salve
        }
    }

    for(int linha = 0;linha < 12;linha++){ // para cada linha da matriz
        for(int coluna = colunaInicial;coluna < 12;coluna++){
            soma = soma + matriz[linha][coluna];
        }
        colunaInicial++;
    }   

    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    } else if(operacao == 'M'){
        printf("%.1lf\n", soma/66);
    }


    // linha 0 ->   somar das colunas 1 a 11
    // linha 1 ->   somar das colunas 2 a 11
    // linha 2 ->   somar das colunas 3 a 11
    // ...
    // linha 9 ->  somar das colunas 10 a 11
    // linha 10 -> somar das colunas 11 a 11
    // linha 11 -> somar das colunas 12 a 11



    return 0;
}