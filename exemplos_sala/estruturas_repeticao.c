#include <stdio.h>

int main(){

    int nota;

    // imprima a mensagem e leia a nota pelo menos uma vez
    do{
        printf("Insira uma nota positiva:\n");
        scanf("%d", &nota);
    } while(nota < 0);


    printf("Insira uma nota positiva:\n");
    scanf("%d", &nota);
    // while so roda se nota inserida for negativa. 
    while(nota < 0){
        printf("Insira uma nota positiva:\n");
        scanf("%d", &nota);
    }

    // imprima o valor de "i" 4 vezes
    for(int i = 0; i <= 3; i++){
        printf("Valor de i: %d!!!!\n", i);
    }
    return 0;
}