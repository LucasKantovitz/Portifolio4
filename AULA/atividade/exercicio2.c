#include <stdio.h>

int main()
{
    char nome[100] = "Lucas Kantovitz";
    float salario = 2500;
    float porcentagem = 0.1;

    float novosalario = salario * porcentagem;
    float aumentado = salario + novosalario;

    printf("Nome: %s \n", nome);
    printf("Salario da Pessoa: %.2f \n", salario);
    printf("Salario da Pessoa com o aumento: %.2f \n", aumentado);

    if(aumentado <= 3000){
        printf( "precisa de uma Auxilio transporte");

    }else{
        printf("Usuario nao precisa ");
    }

    return 0;
}