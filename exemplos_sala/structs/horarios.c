#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int transformaHorarioParaSegundos(struct horario h){
    return h.horas*3600 + h.minutos*60 + h.segundos;
}

int main(){
    struct horario horarios[5];

    for(int i = 0;i < 5;i++){
        printf("Insira horario %d:\n", i + 1);
        printf("horas: ");
        scanf("%d", &horarios[i].horas);
        printf("minutos: ");
        scanf("%d", &horarios[i].minutos);
        printf("segundos: ");
        scanf("%d", &horarios[i].segundos);
    }

    struct horario maiorHorario = horarios[0];

    for(int i = 1;i < 5;i++){
        // transformam horário atual para uma quantidade de segundos
        if(transformaHorarioParaSegundos(horarios[i]) > 
           transformaHorarioParaSegundos(maiorHorario)){
            maiorHorario = horarios[i];
        }
    }

    printf("o maior horario eh: %d:%d:%d\n", 
            maiorHorario.horas, maiorHorario.minutos, maiorHorario.segundos);

    return 0;
}