
//gcc nome Arquivo.c -o nome
// ./nome

#include <stdio.h>

int main (){
    int numeros[5];

    for(int i = 0; i < 5; i++){
        printf("Informe o numero %d\n", i + 1);
        scanf("%d", &numeros[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("Posição %d numero %d\n", i + 1, numeros);
    }

    return 0;
}