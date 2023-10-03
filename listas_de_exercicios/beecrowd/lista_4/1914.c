#include <stdio.h>
#include <string.h>

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
        if(soma%2 == 0 && strcmp(escolha1, "PAR") == 0){ // soma deu par e primeira pessoa escolheu par
            printf("%s\n", nome1); // primeira pessoa ganha
        } else if(soma%2 == 1 && strcmp(escolha1, "IMPAR") == 0){ // soma deu ímpar e primeira pessoa escolheu ímpar
            printf("%s\n", nome1); // primeira pessoa ganha
        } else { // se não acontecer nenhuma condição acima, a segunda pessoa ganha
            printf("%s\n", nome2);
        }
    }

    return 0;
}