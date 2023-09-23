#include <stdio.h>

int main() {
    int v[20];
    
    for (int i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        int a = v[i], b = 19;
        v[i] = v[b - i];
        v[b - i] = a;
    }
    
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, v[i]);
    }

    return 0;
}
