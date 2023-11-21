#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("teste.txt", "r");
    char linha[30];
    if(f == NULL){
        printf("erro ao abrir arquivo!!!\n");
        return 1;
    }

    int i = 1;
    while(fgets(linha, 20, f)){
        printf("linha %d: %s", i, linha);
        i++;
    }

    fclose(f);

    return 0;
}