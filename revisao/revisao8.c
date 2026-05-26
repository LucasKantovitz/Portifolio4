/*8 - Desenvolva um programa em linguagem C que utilize uma função para calcular a média de dois números.*/

#include <stdio.h>

float media(float a, float b) {
    return (a + b)/2; 
}
int main(){
    float a = 0;
    float b = 0;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    prinf("Media %2.f", media(a,b));

    return 0;
}