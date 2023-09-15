#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c);

    maior = (a + b + abs(a-b))/2; // armazena maior entre "a" e "b"
    maior = (maior + c + abs(maior - c))/2; // armazena maior entre "maior" e "c"

    printf("%d eh o maior\n", maior);

    return 0;
}