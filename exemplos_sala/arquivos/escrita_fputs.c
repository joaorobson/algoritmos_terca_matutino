#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("teste.txt", "w");

    if(f == NULL){
        printf("erro ao abrir arquivo!!!\n");
        return 1;
    }
    
    fputs("1234\n", f);
    fputs("5678\n", f);

    fclose(f);

    return 0;
}