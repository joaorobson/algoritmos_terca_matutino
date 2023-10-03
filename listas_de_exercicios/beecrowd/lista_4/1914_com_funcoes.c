#include <stdio.h>
#include <string.h>






char* ehParOuImpar(int valor){
    if(valor%2 == 0){ // se valor for par, retorna a string "PAR"
        return "PAR";
    } else { // senão, retorna a string "IMPAR"
        return "IMPAR";
    }
}

int main(){
    int numEntradas;
    char nome1[101], nome2[101], escolha1[6], escolha2[6];
    int valor1, valor2;
    scanf("%d", &numEntradas);

    for(int i = 0;i < numEntradas;i++){
        scanf("%s", nome1);
        scanf("%s", escolha1);
        scanf("%s", nome2);
        scanf("%s", escolha2);
        scanf("%d", &valor1);
        scanf("%d", &valor2);

        int soma = valor1 + valor2;
        char somaEhParOuImpar[6]; // "PAR" ou "IMPAR"

        // somaEhParOuImpar = ehParOuImpar(soma)
        strcpy(somaEhParOuImpar, ehParOuImpar(soma)); // copiando retorno da função para variável somaEhParOuImpar


        if(strcmp(somaEhParOuImpar, escolha1) == 0){
            printf("%s\n", nome1);
        } else {
        // pessoa 2 ganha se 
        // soma é par e pessoa 1 colocou ímpar OU
        // soma é ímpar e pessoa 1 colocou par
            printf("%s\n", nome2);
        }


        // if de cima substitui if... else if abaixo
        /*
        if(strcmp(somaEhParOuImpar, "PAR") == 0 && strcmp(escolha1, "PAR") == 0){ // soma deu par
            printf("%s\n", nome1);
        } else if( strcmp(somaEhParOuImpar, "IMPAR") == 0 && strcmp(escolha1, "IMPAR") == 0){ // soma deu ímpar
            printf("%s\n", nome1);*/

    }

    return 0;
}