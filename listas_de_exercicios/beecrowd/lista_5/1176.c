#include <stdio.h>


unsigned long long int fibonnaci(int n, unsigned long long int* fibo){

    if(fibo[n] != 0){
        return fibo[n];
    }
    else if(n == 0){
        fibo[0] = 0;
        return 0;
    }
    else if(n == 1){
        fibo[1] = 1;
        return 1;
    } else {
        fibo[n] = fibonnaci(n-1, fibo) + fibonnaci(n-2, fibo);
        return fibo[n];
    }
}

int main(){
    unsigned long long int fibo[61];

    for(int i = 0; i <= 60;i++){
        fibo[i] = 0;
    }

    int numTestes, posFibo;
    scanf("%d", &numTestes);

    for(int i = 0;i < numTestes;i++){
        scanf("%d", &posFibo);
        printf("Fib(%d) = %lld\n", posFibo, fibonnaci(posFibo, fibo));
    }

    return 0;
}