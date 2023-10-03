#include <stdio.h>
#include <math.h>

// 1 1 2 3 5 8 13 21 34 55
int fibonnaci(int n){
    if(n == 1 || n == 2){
        return 1;
    } else {
        return fibonnaci(n-1) + fibonnaci(n-2);
    }
}

void imprimeNumeroFibo(int n){
    printf("10o numero de fibonnaci: %d\n", fibonnaci(n));
}


int main(){
    printf("%d\n", fibonnaci(50));

    return 0;
}