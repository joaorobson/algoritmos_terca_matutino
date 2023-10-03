#include <stdio.h>
#include <string.h>

int main(){
    int numTestes, numIdiomas;
    scanf("%d", &numTestes);

    for(int i = 0;i < numTestes;i++){
        scanf("%d", &numIdiomas);
        char idiomas[numIdiomas][21]; // lista de strings. Cada linha guarda uma string (idioma)

        for(int k = 0;k < numIdiomas;k++){
            scanf("%s", idiomas[k]);
        }
        char primeiroIdioma[21];
        char idiomaFalado[21];

        strcpy(primeiroIdioma, idiomas[0]); // pego primeiro idioma da lista
        strcpy(idiomaFalado, primeiroIdioma); // idioma a ser falado é o primeiro da lista

        for(int k = 1;k < numIdiomas;k++){
            if(strcmp(primeiroIdioma, idiomas[k]) != 0){ // idiomas diferentes
                strcpy(idiomaFalado, "ingles");
                break;
            }
        }
        
        printf("%s\n", idiomaFalado);
        

    }

    return 0;
}