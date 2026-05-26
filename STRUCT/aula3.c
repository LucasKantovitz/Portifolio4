/**
 * Criar a estrutura par a
 * 
 * Pessoa{
 * NOME(CHAR(50));
 * IDADE INT
 * HABILIDADE (CHAR(50))
 * }
 * 
 * cadastrar primeiro o nome e a idade da pessoa na int main()
 * 
 *  depois passar por parâmetro e struct para uma funcao habilidadePessoa()
 * 
 * dentro desta função solicitar a habilidade via switch caso inteligente
 *                                                            ANALISTA
 *                                                            COMUNICATIVO(A)
 *  *                                                         PROATIVO                                                  
 * dentro desta função chamar outra passando a struct para imprimir
 * 
 */

#include <stdio.h>
#include <string.h>


struct Pessoa{
    char nome[50];
    int idade;
    char habilidade[50];
    
};

void imprimirPessoa(struct Pessoa p){
    printf("Recebi a pessoa: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Habilidade: %s\n", p.habilidade);
}

void habilidadePessoa(struct Pessoa p){
    int opcao;
    printf("1 - Inteligente\n");
    printf("2 - Comunicativo(a)\n");
    printf("3 - Proativo\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            strcpy(p.habilidade, "Analista");
            break;

        case 2:
            strcpy(p.habilidade, "Comunicativo(a)");
            break;

        case 3:
            strcpy(p.habilidade, "Proativo");
            break;

        default:
            strcpy(p.habilidade, "Nao definida");
            break;
    }

        imprimirPessoa(p);

};


int main (){

    struct Pessoa p1;

    for(int i = 0; i < 3; i++){
        printf("Nome do aluno: \n");
        scanf("%s", p1.nome);

        printf("Informe a idade: \n");
        scanf("%d", &p1.idade);


        habilidadePessoa(p1);
    }


    return 0;
}

