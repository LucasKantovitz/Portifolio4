/**4 - Desenvolva um programa em linguagem C que pergunte ao usuário a quantidade de alunos de uma turma e,
 *  em seguida, utilize um laço for para ler a nota de cada aluno.


Para cada nota digitada, o programa deve usar um laço while para garantir que o valor esteja entre 0 e 10,
solicitando novamente caso seja inválido.
Depois disso, utilize estruturas if/else para classificar cada aluno como “Aprovado” (nota maior ou igual a 7),
“Recuperação” (nota maior ou igual a 5 e menor que 7) ou “Reprovado” (nota menor que 5).
Ao final do programa, devem ser exibidas as quantidades de alunos aprovados, em recuperação e reprovados.
 *
 */
#include <stdio.h>

int qtd = 0;
int nota = 0;
int aprovado = 0;
int reprovado = 0;
int recuperacao = 0;

int main()
{

    printf("Informe a quantidade de aluno que desja inserir");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++)
    {
        printf("Digite a nota");
        scanf("%d", &nota);
        while (nota < 0  || nota > 10)
        {
            printf("Digite a nota");
            scanf("%f", &nota);
        };
    if(nota >= 7){
        aprovado++;
    }else if(nota >= 5 && nota < 7){
    recuperacao++;
    }else{
        reprovado++;
    };
    }

    printf("aprovado %d", aprovado);
    printf("recuperacao %d", recuperacao);
    printf("reprovado %d", reprovado);
    return 0;
}
