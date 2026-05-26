#include <stdio.h>

int main(){
    char nome[100] = "Lucas";
    char init_sobrenome = 'l';
    int idade = 22;
    float altura = 1.83421412;

    printf ("Nome; %s Inicial Sobre: %c\n", nome, init_sobrenome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    

    return 0;
}