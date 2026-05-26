/**
 * criar a função
 * dobrar o valor de cada posição do vetor
 * e gravar ele em outro vetor
 * imprimir ambos os vetores
 */

#include <stdio.h>

float calcularMedia(int v[], int tamanho){
    float soma = 0;
    for(int i=0; i<tamanho; i++){
        soma += v[i];
    }
    return soma / tamanho;
}

int dobrarNumeros(int v[], int resultado[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        resultado[i] = v[i] * 2;
    }
    return 1;
}


int main (){
    int notas[3] = {7,8,9};
    int notasMultiplicavel[3];
    
    float media = calcularMedia(notas,3);
    printf("A media é de %.2f", media);

    return 0;
}