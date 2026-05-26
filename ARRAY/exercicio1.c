/**
 * EXERCICIO 01: CONSOLIDAÇÃO DE VETORES
 *
 * ENUNCIADO
 *  *Crie um programa que persita cadastar o nome e a nota de 5 alunos
 *  * Apos a leitura o programa deve:
 *   1. calcular exibir a média geral da sala.
 *   2. encontrar e exibir o nome do aluno que tirou a maior nota
 *
 *  REQUISITOS
 *   - USE UM VETOR PARA OS NOMES (CHAR[][]) E OUTRA PARA AS NOTAS (FLOAT[]).
 *  - USE LOOPS (FOR) PARA ENTRADA E PROCESSAMENTO DE DADOS
 */

#include <stdio.h>

int main()
{

    char nomeAlunos[5][30];
    float nota[5];
    float media = 0;
    int maior = 0;
    float soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o nome do aluno %d:\n", i + 1);
        scanf(" %[^\n]",  nomeAlunos[i]);

        printf("Informe a nota do aluno %d:\n", i + 1);
        scanf("%f", &nota[i]);

        media += nota[i];

        if (nota[i] > nota[maior]){
            
            maior = i;
        }

    }

    
    media = media / 5;

    printf("\nMedia da turma: %.2f\n", media);
    printf("Aluno com maior nota: %s (%.2f)\n", nomeAlunos[maior], nota[maior]);

    return 0;
}
