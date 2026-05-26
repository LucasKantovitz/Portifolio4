/*Duas Variaveis numericas FLOAT 
RECEBE DOIS VALORES

Quatro variaveis somar, substrair, multiplicar e dividar

gera o codigo para ele realizar as operações e incluir nas variaveis e logo em seguida imprimir na tela os valores
*/

#include <stdio.h>

int main(){
    float v1 = 3;
    float v2 = 1;

    float soma, sub, mult, divisao;

    soma = v1 + v2;
    sub = v1 - v2;
    mult = v1 * v2;
    divisao = v1 / v2;

    printf("SOMA EH: %.2f\n", soma);
    printf("SUBTRAIR: %.2f\n", sub);
    printf("MULTIPLICAR: %.2f\n", mult);
    printf("DIVIDIR: %.2f\n", divisao);

    return 0; 
}