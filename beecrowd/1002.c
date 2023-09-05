#include <stdio.h>

int main(){

    double raio;
    double pi = 3.14159;

    scanf("%lf", &raio);

    printf("A=%.4lf\n", pi * raio * raio);

    return 0;
}