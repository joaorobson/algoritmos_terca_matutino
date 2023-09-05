#include <stdio.h>

int main(){
    int n, numeroHoras, numeroMinutos, numeroSegundos, resto;

    scanf("%d", &n);

    numeroHoras = n / 3600;
    resto = n % 3600;

    numeroMinutos = resto / 60;
    resto = resto % 60;

    numeroSegundos = resto;


    printf("%d:%d:%d\n", numeroHoras, numeroMinutos, numeroSegundos);

    return 0;
}