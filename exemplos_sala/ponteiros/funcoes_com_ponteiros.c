#include <stdio.h>

void multiplicaValorPor2(int* valor){
    printf("endereco de memoria do paramentro 'valor': %p\n", valor);
    *valor = *valor*2;
}


int main(){
    int a = 10;
    
    printf("valor de a: %d\n", a);
    printf("endereco de memoria de 'a': %p\n", &a);

    multiplicaValorPor2(&a);
    printf("valor de a apos funcao: %d\n", a);



    return 0;
}