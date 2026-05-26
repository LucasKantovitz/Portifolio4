#include <stdio.h>
#include <string.h>

struct Dados{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

int main(){

    struct Dados a1[3];
    for(int i = 0; i<3; i++){
        
            printf("Nome do aluno: ");
            scanf("%s", a1[i].nome);
        
            printf("Informe a matricula: ");
            scanf("%d", &a1[i].matricula);
        
            printf("Informe a nota1: ");
            scanf("%f", &a1[i].nota1);
        
            printf("Informe a nota2: ");
            scanf("%f", &a1[i].nota2);
        
            a1[i].media = (a1[i].nota1 + a1[i].nota2) / 2;


    }

    for(int i = 0; i<3; i++){
    
    printf("Nome: %s\n", a1[i].nome);
    printf("Matricula: %d\n", a1[i].matricula);
    printf("Nota1: %.2f\n", a1[i].nota1);
    printf("Nota2: %.2f\n", a1[i].nota2);
    printf("Media: %.2f\n", a1[i].media);
}
    return 0;
}