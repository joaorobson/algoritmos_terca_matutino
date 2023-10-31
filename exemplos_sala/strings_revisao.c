#include <stdio.h>

int main(){
    char string[8];

    scanf("%s", string);

    for(int i = 0;i < 8;i++){
        printf("%c\n", string[i]);
    }


    return 0;
}