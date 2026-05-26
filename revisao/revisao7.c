/* 7- Com ponteiro vc consegue alugar um lugar da memoria para outra 
*/

#include <stdio.h>

int main(){

    int idade = 20;
    int *p;

    p = &idade;

    printf("Valor da idade: %d\n", idade);
    printf("Valor armazenado no ponteiro: %p\n", p);

    return 0;
}