#include <stdio.h>

int main(){

    char nome[100] = "Lucas Kantovitz";
    int idade = 15;

    printf("*** Verifica usuario ***\n");

    if(idade >= 18){
        printf("Usuario: %s está liberado\n", nome);
    }
    else{
        printf("Usuario: %s está bloqueado.\n", nome);
        printf("Idade inferior a 18!\n");
    }

    return 0; 
}