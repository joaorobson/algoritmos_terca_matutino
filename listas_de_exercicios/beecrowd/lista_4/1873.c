#include <stdio.h>
#include <string.h>


int armaParaCodigo(char* escolha){
    int codTesoura = 0, codPedra = 1, codPapel = 2, codSpock = 3, codLagarto = 4;

    if(strcmp(escolha, "tesoura") == 0){
        return codTesoura; // 0
    }  else if(strcmp(escolha, "pedra") == 0){
        return codPedra; // 1
    }  else if(strcmp(escolha, "papel") == 0){
        return codPapel; // 2
    }  else if(strcmp(escolha, "spock") == 0){
        return codSpock; // 3
    }  else if(strcmp(escolha, "lagarto") == 0){
        return codLagarto; // 4
    } 
}

char* codigoParaArma(int codArma){

    if(codArma == 0){
        return "tesoura"; // 0
    }  else if(codArma == 1){
        return "pedra"; // 1
    }  else if(codArma == 2){
        return "papel"; // 2
    }  else if(codArma == 3){
        return "spock"; // 3
    }  else if(codArma == 4){
        return "lagarto"; // 3
    } 
}

int main(){
    int numJogos;
    char escolhaSheldon[8], escolhaRajesh[8];

    int tabelaResultados[5][5] = {
        {5, 1, 0, 3, 0},
        {1, 5, 2, 3, 1},
        {0, 2, 5, 2, 4},
        {3, 3, 2, 5, 4},
        {0, 1, 4, 4, 5}
    };

    scanf("%d", &numJogos);

    for(int i = 0;i < numJogos;i++){
        scanf("%s", escolhaRajesh);
        scanf("%s", escolhaSheldon);

        // checa se escolhaRajesh é igual a escolhaSheldon
        if(strcmp(escolhaRajesh, escolhaSheldon) == 0){
            printf("empate\n");
        } else {
            int codEscolhaRajesh = armaParaCodigo(escolhaRajesh);
            int codEscolhaSheldon = armaParaCodigo(escolhaSheldon);
            
            int codArmaGanhadora = tabelaResultados[codEscolhaRajesh][codEscolhaSheldon];

            char armaGanhandora[8];
            //armaGanhandora = codigoParaArma(codArmaGanhadora);
            strcpy(armaGanhandora, codigoParaArma(codArmaGanhadora));

            if(strcmp(escolhaRajesh, armaGanhandora) == 0){
                printf("rajesh\n");
            } else {
                printf("sheldon\n");
            }
        }
    }


    return 0;
}