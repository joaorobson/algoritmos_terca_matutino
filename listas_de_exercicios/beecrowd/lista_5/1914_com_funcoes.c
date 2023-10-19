#include <stdio.h>
#include <string.h>

// char* representa que a função vai retornar uma string
// isso tem relação com ponteiros, que veremos adiante
char* ehParOuImpar(int valor){
    if(valor%2 == 0){ // se valor for par
        return "PAR";// retorno "PAR"
    } else { // se valor for ímpar
        return "IMPAR"; // retorno "IMPAR"
    }
}


int main(){
    int numEntradas;
    char nome1[100], nome2[100], escolha1[6], escolha2[6];
    int numEscolhido1, numEscolhido2;

    scanf("%d", &numEntradas);
    
    for(int i = 0;i < numEntradas;i++){
        scanf("%s", nome1);
        scanf("%s", escolha1);
        scanf("%s", nome2);
        scanf("%s", escolha2);
        scanf("%d", &numEscolhido1);
        scanf("%d", &numEscolhido2);

        int soma = numEscolhido1 + numEscolhido2;

        // checa se condição da soma (par ou ímpar)
        // é igual escolha da primeira pessoa
        if(strcmp(ehParOuImpar(soma), escolha1) == 0){
            // entro no if se 
            // ehParOuImpar retornar PAR e escolha1 for PAR OU
            // ehParOuImpar retornar IMPAR e escolha1 for IMPAR
            printf("%s\n", nome1);
        } else {
            printf("%s\n", nome2); 
        }
    }


    return 0;
}
