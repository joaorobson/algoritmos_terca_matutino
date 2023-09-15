#include <stdio.h>

int main(){
    int chaCorreto;
    int tentativa;
    int acertos = 0;

    scanf("%d", &chaCorreto);

    for(int i = 0;i < 5;i++){
        scanf("%d", &tentativa);
        if(tentativa == chaCorreto){
            acertos++;
        }
    }

    printf("%d\n", acertos);    
    return 0;
}