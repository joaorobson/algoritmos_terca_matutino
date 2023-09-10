#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    char operacao;

    printf("Insira uma operacao:\n");
    scanf("%c", &operacao);

    printf("Insira dois numeros:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    
    printf("Operacao: %c\n", operacao);

    if(operacao == '+'){
        printf("Resultado: %d\n", numero1 + numero2);
    } else if(operacao == '-'){
        printf("Resultado: %d\n", numero1 - numero2);
    } else if(operacao == '*'){
        printf("Resultado: %d\n", numero1 * numero2);
    } else if(operacao == '/' && numero1 > numero2){
        printf("Resultado: %d\n", numero1 / numero2);
    } else if(operacao == '%'){
        printf("Resultado: %d\n", numero1 % numero2);
    } else {
        printf("OPERACAO INVALIDA!!\n");
    }

    return 0;
}