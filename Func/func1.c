#include <stdio.h>

void abertura(){
    printf("Inicio da instrução\n");
}

void fechamento(){
    printf("Final da instrução\n");
}

int main(){
    abertura();
    abertura();
    printf("Medio da instrução\n");
    fechamento();

    return 0;
}