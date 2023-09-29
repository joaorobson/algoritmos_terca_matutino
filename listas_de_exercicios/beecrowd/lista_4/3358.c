#include <stdio.h>
#include <string.h>


int main(){
    int numEntradas, consoantesConsecutivas = 0;
    char sobrenome[43];
    scanf("%d", &numEntradas);

    for(int i = 0;i < numEntradas;i++){
        scanf("%s", sobrenome);
        consoantesConsecutivas = 0;
        for(int posicao = 0;posicao < strlen(sobrenome);posicao++){
            char letra = sobrenome[posicao];

            // checar, letra por letra, se é consoante ou não
            if(letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' &&
               letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U' ){
                consoantesConsecutivas++;
                if(consoantesConsecutivas >= 3){
                    printf("%s nao eh facil\n", sobrenome);
                    break;
                }
            } else {
                consoantesConsecutivas = 0;
            }
        }
        if(consoantesConsecutivas <= 2){
            printf("%s eh facil\n", sobrenome);
        }
    }


    return 0;
}