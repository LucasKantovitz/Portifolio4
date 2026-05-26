#include <stdio.h>

int global = 20;

void mostrarGlobal(){
    printf("Valor local %d\n", global);
    
}

int main () {
    int local = 10;
    printf("Valor local %d\n", local);
    mostrarGlobal();
    return 0;
}