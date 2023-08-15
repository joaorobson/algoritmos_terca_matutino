#include <stdio.h>

int main(){
    int nota1, nota2, nota3, media;

    printf("Digite 3 notas de um aluno:\n");

    printf("Nota 1: ");
    scanf("%d", &nota1);

    printf("Nota 2: ");
    scanf("%d", &nota2);
    
    printf("Nota 3: ");
    scanf("%d", &nota3);    

    media = (nota1 + nota2 + nota3)/3;


    if(media == 8){
        printf("parabens! bonus de 1 ponto!\n");
        media = media + 1;
    }
    else if(media == 9){
        printf("parabens! bonus de 1 ponto!\n");
        media = media + 1;
    }

    printf("media: %d\n", media);


    if(media < 7){
        printf("reprovado\n");
    } else if (media > 8){
        printf("espetacular\n");
    }
    else if(media > 9){
        printf("tu e o bixao mesmo hein!");
    }
    else {
        printf("aprovado\n");
    }

    return 0; 
}