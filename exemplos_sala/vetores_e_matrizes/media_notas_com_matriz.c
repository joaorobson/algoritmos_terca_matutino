#include <stdio.h>

int main(){

    // matriz representando 2 alunos, cada um com 4 notas
    // 2 linhas, 4 colunas
    double notas[2][4];
    /*  Representação da matriz
        1º aluno [ ] [ ] [ ] [ ]
        2° aluno [ ] [ ] [ ] [ ]
    */

    // Substitui código da linha 30 a linha 40
    // para cada linha (ou aluno)
    for(int linha = 0;linha <= 1;linha++){
        // leia 4 notas
        printf("Insira as 4 notas do aluno %d:\n", linha + 1);
        // para cada coluna (ou nota)
        for(int coluna = 0;coluna <= 3;coluna++){
            // leia a nota e salve
            printf("Nota %d: ", coluna + 1);
            scanf("%lf", &notas[linha][coluna]);
        }
    }



    /*
    printf("Insira as 4 notas do primeiro aluno:\n");
    for(int i = 0;i <= 3;i++){
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[0][i]);
    }

    printf("Insira as 4 notas do segundo aluno:\n");
    for(int i = 0;i <= 3;i++){
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[1][i]);
    }
    */

   // Substitui código da linha 55 a 63
    for(int linha = 0;linha <= 1;linha++){
        // imprime notas do aluno
        printf("Notas do aluno %d:\n", linha + 1);
        // para cada coluna (ou nota)
        for(int coluna = 0;coluna <= 3;coluna++){
            // Imprime cada nota
            printf("Nota %d: %.1lf\n", coluna + 1, notas[linha][coluna]);
        }
    }

    /*
    printf("Notas do primeiro aluno:\n");
    for(int i = 0;i <= 3;i++){
        printf("Nota %d: %.1lf\n", i + 1, notas[0][i]);
    }

    printf("Notas do segundo aluno:\n");
    for(int i = 0;i <= 3;i++){
        printf("Nota %d: %.1lf\n", i + 1, notas[1][i]);
    }
    */


    return 0;
}