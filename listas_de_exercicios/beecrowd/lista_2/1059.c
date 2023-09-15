#include <stdio.h>

int main(){


    // versão menos eficiente -> roda o dobro de vezes
/*     for(int numero = 1;numero <= 100;numero++){
        if(numero%2 == 0){
            printf("%d\n", numero);
        }
    } */

    for(int numero = 2;numero <= 100;numero = numero + 2){
        printf("%d\n", numero);
    }

    return 0;
}