#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[50];
    int idade;
    char fone[20];
};

int main (){
    struct Pessoa p1;
    
    p1.idade = 18;
    strcpy(p1.nome, "Thiago");
    strcpy(p1.fone, "199243523");

    printf("Nome: %s\n", p1.nome);
    printf("Nome: %d\n", p1.idade);
    printf("Nome: %s\n", p1.fone);

    return 0;
}