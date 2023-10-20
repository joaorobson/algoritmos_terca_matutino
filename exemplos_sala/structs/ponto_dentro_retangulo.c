#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

struct retangulo{
    struct ponto pontoA;
    struct ponto pontoD;
};


int pontoEstaDentroDoRetangulo(struct retangulo r, struct ponto p){
    if(p.y >= r.pontoD.y && p.y <= r.pontoA.y &&
       p.x >= r.pontoA.x && p.x <= r.pontoD.x){
        return 1;
    }
    return 0;
}

int main(){
    struct retangulo ret;
    struct ponto pontoE;

    printf("Insira o ponto A (canto superior esquerdo) do retangulo:\n");
    printf("coordenada x do ponto A: ");
    scanf("%d", &ret.pontoA.x);
    printf("coordenada y do ponto A: ");
    scanf("%d", &ret.pontoA.y);

    printf("Insira o ponto D (canto inferior direito) do retangulo:\n");
    printf("coordenada x do ponto D: ");
    scanf("%d", &ret.pontoD.x);
    printf("coordenada y do ponto D: ");
    scanf("%d", &ret.pontoD.y);

    printf("Insira o ponto E:\n");
    printf("coordenada x do ponto E: ");
    scanf("%d", &pontoE.x);
    printf("coordenada y do ponto E: ");
    scanf("%d", &pontoE.y);

    int pontoEDentroDoRetangulo = pontoEstaDentroDoRetangulo(ret, pontoE);

    if(pontoEDentroDoRetangulo){
        printf("ponto E esta dentro do retangulo ret\n");
    } else {
        printf("ponto E nao esta dentro do retangulo ret\n");
    }

    return 0;
}