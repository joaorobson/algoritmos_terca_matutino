#include <stdio.h>

int main(){
    double notas[4], somaNotas = 0, pesos[4] = {0.1, 0.2, 0.3, 0.4};
    char nomeAluno[20];


    printf("Insira o nome do aluno: ");
    scanf("%[^\n]s", &nomeAluno);
    printf("Nome do aluno: %s\n", nomeAluno);

    printf("Insira 4 notas:\n");
    for(int i = 0;i <= 3;i++){
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
        somaNotas = somaNotas + notas[i];
    }

    for(int i = 0;i <= 3;i++){
        printf("Nota %d: %lf\n", i + 1, notas[i]);
    }

    printf("Media final: %lf\n", somaNotas/4);

    return 0;
}