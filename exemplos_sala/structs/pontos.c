#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};


int main(){
    struct ponto p1, p2;

    printf("Insira as coordenadas do ponto p1:\n");
    printf("x: ");
    scanf("%d", &p1.x);
    printf("y: ");
    scanf("%d", &p1.y);

    printf("Insira as coordenadas do ponto p2:\n");
    printf("x: ");
    scanf("%d", &p2.x);
    printf("y: ");
    scanf("%d", &p2.y);


    printf("distancia entre p1 (%d, %d) e (0, 0):\n", p1.x, p1.y);
    printf("%f", sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y,2)));

    return 0;
}
