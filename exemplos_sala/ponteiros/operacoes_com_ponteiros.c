#include <stdio.h>

int main(){
    char c = 'a';
    char *p = &c;

    printf("valor de p: %p\n", p);
    p++;
    printf("valor de p++: %p\n", p);


    return 0;
}