#include <stdio.h>
#include <string.h>

int main(){
    // primeira forma de inicializar
    char string1[10] = {'a', 'b', 'c', '\0'};
    // Se não usar o \0, pode ser que na memória exista valores salvos
    // nas outras posições: ['a', 'b', 'c', '7', '*', '-', ...]

    // segunda forma de inicializar
    char string2[10] = "def";

    // terceira forma de inicializar, lendo do terminal com gets
    // Não recomendada! Tem problemas por não ter um limite no tamanho da entrada lida
    char string3[10];
    printf("Insira uma string para ser lida pelo 'gets': ");
    gets(string3);

    // quarta forma de incializar, lendo com fgets
    // permite passar tamanho máximo da entrada
    // evita problemas com o buffer
    // lê o "enter" como \n e salva ao fim da string
    char string4[20];
    printf("Insira uma string para ser lida pelo 'fgets': ");
    fgets(string4, 20, stdin);

    printf("string1 (inicializada passando uma lista de chars): %s\n", string1);
    printf("string2 (inicializada passando uma string literal): %s\n", string2);
    printf("string3 (inicializada com gets): %s", string3);
    printf("======== depois do printf da gets\n");

    printf("Imprimindo string4 com fputs:\n");
    fputs(string4, stdout);
    printf("======== depois do printf da fgets\n");
    
    // funções para manipular strings

    // tamanho de uma string
    printf("Tamanho da string4: %d\n", strlen(string4));

    // copiar uma string para outra
    char string5[30] = "joao";
    // string5 = string1; -> não é permitido
    // pega valor da string1 e joga na string5
    // strcpy(string1, ""); // -> apaga string1
    strcpy(string5, string1);
    printf("string5 (inicializada com strcpy): %s\n", string5);


    // concatenar strings
    // pega a string2 e coloca ao fim da string1
    
    strcat(string1, string2);
    printf("string1 concatenada com string2: %s\n", string1); 

    // comparar strings

    //int s1 = "abc", s2 = "abc";
    // if(s1 == s2){} -> não é permitido em C
    char s1[10] = "bcdf";
    char s2[10] = "abcd";

    if(strcmp(s1, s2) == 0){
        printf("%s eh igual a %s\n", s1, s2);
    } else if(strcmp(s1, s2) < 0){
        printf("%s vem antes de %s alfabeticamente\n", s1, s2);
    } else if(strcmp(s1, s2) > 0){
        printf("%s vem depois de %s alfabeticamente\n", s1, s2);
    }

    return 0;
}