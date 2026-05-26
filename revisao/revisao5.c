/*5 - Desenvolva um programa em linguagem C que leia a idade de uma quantidade de pessoas utilizando um vetor.

O programa deve pedir a quantidade de pessoas (máximo 50) e armazenar as idades em um vetor.
Em seguida, deve calcular e mostrar a média das idades e informar quantas pessoas são maiores
de idade (18 anos ou mais)
e quantas são menores de idade.
*/

#include <stdio.h>

int main (){
int qtd = 0;
int idade[50];
int maior = 0;
int menor = 0;
int soma = 0;
float media = 0;

printf("Digite a quantidade de pessoas");
scanf("%d", &qtd);

for(int i = 0; i<qtd; i++){
    printf("Digite sua idade;");
    scanf("%d", &idade[i]);
    soma += idade[i];

    if(idade[i] < 18){
        menor++;
    }else{
        maior++;
    }
}

media = soma/ (float)qtd;

    printf("\nMedia das idades: %.2f\n", media);
    printf("Maiores de idade: %d\n", maior);
    printf("Menores de idade: %d\n", menor);

return 0;
};