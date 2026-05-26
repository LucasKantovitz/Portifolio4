#include <stdio.h>

void dobrar(int *num){
    *num = *num * 2;
}

int main(){
    int valor = 5;
    printf("Antes%d\n", valor);
dobrar(&valor);
    printf("Dobrar %d\n", valor);
};