/**
 * Criar uma rotina para receber 5 nomeros 
 *      imprimir estes nomes apos receber via scanf.
 * 
 */



#include <stdio.h>

int main (){
    char nomes[5][50];

    for(int i = 0; i < 5; i++){
        printf("Informe os nomes %d\n", i + 1);
        scanf("%s", nomes[i]);  
    }
        for(int i = 0; i < 5; i++){
        printf("Posição %d nome %s\n", i + 1, nomes[i]);
    }

    return 0;
}