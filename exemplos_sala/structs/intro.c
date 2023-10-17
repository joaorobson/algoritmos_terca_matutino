#include <stdio.h>

typedef struct endereco {
    char cidade[50];
    char rua[50];
    int numero;
} Endereco;

typedef struct aluno {
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
    struct endereco endereco;
} Aluno;

typedef int inteiro;


inteiro main(){
    //struct aluno aluno1; // declarando variável do "tipo" struct aluno
    Aluno aluno1;
    // é possível inicializar structs logo na declaração
    struct aluno aluno2 = {"maria eduarda", 1234567, 9, 9.8, 7, "rua x casa 10"};
    struct aluno aluno3;

    // copiando dados do aluno2 para o aluno3
    aluno3 = aluno2;

    // posso ter uma lista de structs também
    /*
        struct aluno alunos[3];

        alunos[0].matricula = 123;
        alunos[0].nota1 = 9.8;
    */


    printf("Insira dados do aluno:\n");
    printf("nome: ");
    fgets(aluno1.nome, 50, stdin);

    printf("matricula: ");
    scanf("%d", &aluno1.matricula);

    printf("notas: ");
    scanf("%f %f %f", &aluno1.nota1, &aluno1.nota2, &aluno1.nota3);

    printf("cidade: ");
    fflush(stdin);
    fgets(aluno1.endereco.cidade, 50, stdin);
    printf("rua: ");
    fflush(stdin);
    fgets(aluno1.endereco.rua, 50, stdin);
    printf("numero: ");
    scanf("%d", &aluno1.endereco.numero);


    printf("Informacoes do aluno1:\n");
    printf("nome: %smatricula: %d\nnotas: %f %f %f\n", 
            aluno1.nome, aluno1.matricula, 
            aluno1.nota1, aluno1.nota2, aluno1.nota3);
    printf("endereco:\ncidade: %srua: %snumero: %d\n", 
            aluno1.endereco.cidade, aluno1.endereco.rua, aluno1.endereco.numero);

    /* printf("Informacoes do aluno2:\n");
    printf("nome: %s\nmatricula: %d\nnotas: %f %f %f\n", 
            aluno2.nome, aluno2.matricula, 
            aluno2.nota1, aluno2.nota2, aluno2.nota3);

    printf("Informacoes do aluno3:\n");
    printf("nome: %s\nmatricula: %d\nnotas: %f %f %f\n", 
            aluno3.nome, aluno3.matricula, 
            aluno3.nota1, aluno3.nota2, aluno3.nota3); */
    return 0;
}