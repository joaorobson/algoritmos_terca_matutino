#include <stdio.h>

int main(){
    int limite, valorInicial;
    scanf("%d", &limite);
    valorInicial = 1;
    
    for(int i = 0;i < limite;i++){
        printf("%d %d %d PUM\n", 
                valorInicial, 
                valorInicial + 1, 
                valorInicial + 2);
        valorInicial = valorInicial + 4;
    }

    return 0;
}