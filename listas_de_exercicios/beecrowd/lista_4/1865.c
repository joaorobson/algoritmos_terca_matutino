#include <stdio.h>
#include <string.h>

int main(){
    int numEntradas;
    char nome[50];
    int forca;
    scanf("%d", &numEntradas);

    for(int repeticoes = 0;repeticoes < numEntradas;repeticoes++){
        scanf("%s", nome); // posso usar scanf porque são nomes sem espaço
        scanf("%d", &forca);
        if(strcmp(nome, "Thor") == 0){
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }


    return 0;
}