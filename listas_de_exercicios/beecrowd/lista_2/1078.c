#include <stdio.h>

int main(){
    unsigned int n;
    scanf("%u", &n);

    for(int i = 1;i <= 10;i++){
        printf("%d x %d = %d\n", i, n, i * n);
    }

    return 0;
}