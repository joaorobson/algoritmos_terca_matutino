#include <stdio.h>

int main(){

    int matriz[2][3];

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;


    /*
        Matriz fica assim:
        1 2 3
        4 5 6
    */

    for(int linha = 0;linha <= 1;linha++){
        //printf("Linha atual: %d\n", linha);

        for(int coluna = 0;coluna <= 2;coluna++){
            //printf("Coluna atual: %d\n", coluna);
            printf("%d ",
                    matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;

}