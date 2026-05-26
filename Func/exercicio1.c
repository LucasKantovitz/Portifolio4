/**
 * Escreva 3 funções normais soma subtrair e multplica 
 * calcule os valroes 
 * criar um função com pinteiros(refenrecia) para trocar os valroes das variaveis entre elas exemplo
 *  A = B
 * B = A
 * 
 * depois executar novamente as 3 funções
 */

#include <stdio.h>

void soma (int *a, int b){
    *a += b;
}

void subtrair (int *a){
    *a -= 10;
}

void mult (int *a, int c){
    *a *= c;
}

void swapValues(int *a, int *b) {
    *b = *a;
}

int main (){
    
    int a = 10;
    int b = 2;
    int c = 2;

    soma(&a, b);
    mult(&a, c);
    
    printf("%d", a);

    swapValues(&c, &a);

    printf("c: %d", c);

    return 0;
};

