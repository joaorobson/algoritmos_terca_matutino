#include <stdio.h>
#include <string.h>

int ehConsoante(char letra){
    if(letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' 
        && letra != 'u' && letra != 'A' && letra != 'E' && letra != 'I' 
        && letra != 'O' && letra != 'U'){
        // é consoante
        return 1;
    }

    return 0;
}

int possuiSequenciaConsonantes(char* string, int tamanhoSequencia){
    int numConsoantes = 0;
    for(int pos = 0;pos < strlen(string);pos++){
        if(ehConsoante(string[pos])){
            numConsoantes++;
            if(numConsoantes == tamanhoSequencia){
                return 1;
            }
        } else {
            numConsoantes = 0;
        }
    }
    return 0;
}



int main(){
    int numSobrenomes, temSequencia3Consoantes;
    char sobrenome[43];
    scanf("%d", &numSobrenomes);

    for(int i = 0;i < numSobrenomes;i++){
        scanf("%s", sobrenome);
        temSequencia3Consoantes = possuiSequenciaConsonantes(sobrenome, 3);
        if(temSequencia3Consoantes){
            printf("%s nao eh facil\n", sobrenome);
        } else {
            printf("%s eh facil\n", sobrenome);
        }
    }
    return 0;
}
