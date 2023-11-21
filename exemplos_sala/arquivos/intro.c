#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("teste.txt", "a");

    if(f == NULL){
        printf("erro ao abrir arquivo!!!\n");
        return 1;
    }

    fclose(f);

    return 0;
}