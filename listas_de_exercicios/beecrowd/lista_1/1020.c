#include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", idade/365, idade%365/30, idade-365*(idade/365)-30*(idade%365/30));
    return 0;
}
