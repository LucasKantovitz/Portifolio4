/*2 - Sabendo que a fórmula para calcular o Índice de Massa Corporal (IMC) é peso / (altura x altura).
Escreva um algoritmo que receba as informações de peso e altura, calcule e escreva na tela o IMC. 
*/

#include <stdio.h>

int main(){
    float peso = 0;
    float altura = 0;
    
    printf("Digite sua altura");
    scanf("%f", &altura);
    
    printf("Digite sua peso");
    scanf("%f", &peso);
    
    float imc = peso/ (altura * altura);
    printf("Seu IMC eh: %f", imc);
    
    return 0;
}