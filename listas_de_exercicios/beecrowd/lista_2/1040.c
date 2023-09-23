#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,n3,n4,media,media1,Exame;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    media=(2*n1+3*n2+4*n3+1*n4)/10.0;
    printf("Media: %.1lf\n",media);
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }
    
    else if(media<4.9){
        printf("Aluno reprovado.\n");
    }
    else if(media>=5.0 && media<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&Exame);
        printf("Nota do exame: %.1lf\n",Exame);

        media1=(media+Exame)/2.0;
        if(media1>=5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");

        }
        printf("Media final: %.1lf\n",media1);
        }


    return 0;
}

