#include <stdio.h>
#include <string.h>

float calculaSomaItensVetor(float *vetor, int numItens)
{
    float soma = 0;

    for (int i = 0; i < numItens; i++)
    {
        // soma = soma + notas[i]*pesos[i];
        soma += vetor[i];
    }
    return soma;
}

float calculaMediaPonderada(float *valores, float *pesos, int numItens)
{
    float somaPonderada = 0;
    // calculando soma ponderada das notas
    for (int i = 0; i < numItens; i++)
    {
        // soma = soma + notas[i]*pesos[i];
        somaPonderada += valores[i] * pesos[i];
    }

    float somaPesos = calculaSomaItensVetor(pesos, numItens);

    float mediaPonderada = somaPonderada / somaPesos;
    return mediaPonderada;
}

char *checaAprovacao(float nota, float notaMinAprovacao, float notaReprovacao)
{
    if (nota >= notaMinAprovacao)
    {
        return "aprovado";
    }
    else if (nota <= notaReprovacao)
    {
        return "reprovado";
    }
    return "em exame";
}

float calculaMediaFinal(float notaExame, float mediaInicial)
{
    float mediaFinal = (notaExame + mediaInicial) / 2;
    return mediaFinal;
}

int main()
{
    float notas[4], pesos[4] = {2, 3, 4, 1};
    char situacaoAluno[10];

    for (int i = 0; i < 4; i++)
    {
        scanf("%f", &notas[i]);
    }
    int numItens = sizeof(notas) / sizeof(notas[0]);
    float mediaInicial = calculaMediaPonderada(notas, pesos, numItens);

    printf("Media: %.1f\n", mediaInicial);

    strcpy(situacaoAluno, checaAprovacao(mediaInicial, 7.0, 4.9));
    printf("Aluno %s.\n", situacaoAluno);

    if (strcmp(situacaoAluno, "em exame") == 0){ // 5 <= media < 7 -> aluno em recuperação
        float notaExame;
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);
        float mediaFinal = calculaMediaFinal(notaExame, mediaInicial);
        strcpy(situacaoAluno, checaAprovacao(mediaInicial, 5.0, 4.9));
        printf("Aluno %s.\n", situacaoAluno);
        printf("Media final: %.1f\n", mediaFinal);
    }

    return 0;
}