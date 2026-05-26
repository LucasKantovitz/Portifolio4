/**
 * Criar um vetor para 5 numeros e o sistema deve entregar a soma dos valores
 * informados em seguida o maior numero de dentro do vetor 
 * o menor numero de dentro do vetor
 */

#include <stdio.h>

int main (){
    int numeros[5];
int soma = 0;   
int maior = 0;
int menor = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i <5; i++){
        soma += numeros[i];
        if(numeros[i] > maior){
            maior = numeros[i];
        }  
        
    }


    for (int i = 0; i <5; i++){
        if(i== 0 || numeros[i] < menor){
                menor = numeros[i];
            }
       
        
    }
    printf("A soma dos numeros é: %i\n", soma);
    printf("Maior numero: %i\n", maior);
    printf("Menor numero: %i\n", menor);
    
    return 0;
}