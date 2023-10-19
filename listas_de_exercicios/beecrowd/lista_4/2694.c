#include <stdio.h>
#include <stdlib.h>

int main(){
    int numLinhas;
    scanf("%d", &numLinhas);
    char textoLinha[15];
    
    for(int i = 0;i < numLinhas;i++){
        scanf("%s", textoLinha);
        char valor1[3] = {textoLinha[2], textoLinha[3], '\0'};
        char valor2[4] = {textoLinha[5], textoLinha[6], textoLinha[7], '\0'};
        char valor3[3] = {textoLinha[11], textoLinha[12], '\0'};
        printf("%d\n", atoi(valor1) + atoi(valor2) + atoi(valor3));
    }

    return 0;
}
