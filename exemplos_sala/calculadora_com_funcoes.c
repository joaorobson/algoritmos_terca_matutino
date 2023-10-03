#include <stdio.h>

// A declaração das funções deve vir antes de sua chamada
// int a recebe o VALOR de numero1
// int b recebe o VALOR de numero2
int soma(int a, int b){
    return a + b;
}

int subtracao(int c, int d){
    return c - d;
}

int realizaOperacao(char operacao, int numero1, int numero2){
    int resultado;   
    if(operacao == '+'){
        resultado = soma(numero1, numero2); // pega a cópia dos valores de numero1 e numero2 e manda pra função
    } else if(operacao == '-'){
        resultado = subtracao(numero1, numero2);
    }
    return resultado;
}



int main(){
    char operacao;

    printf("Insira uma operacao:\n");
    scanf("%c", &operacao);

    int numero1;
    int numero2;
    printf("Insira dois numeros:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    int resultado = realizaOperacao(operacao, numero1, numero2);
    
    printf("Resultado: %d\n", resultado);

    printf("Terminei os calculos...\n");

    return 0;
}